#include <stdio.h>
#include "platform.h"
#include "xparameters.h"
#include "xil_exception.h"
#include "xstatus.h"
#include "xaxidma.h"
#include "xil_mem.h"
#include "util.h"
#include "xintc.h"
#include "constants.h"
#include "sleep.h"
#include "blake2s.h"

//////////////////////// GLOBALS ////////////////////////
static XAxiDma sAxiDma;

// LED colors and controller
u32 *led = (u32*) XPAR_RGB_PWM_0_PWM_AXI_BASEADDR;
const struct color RED =    {0x01ff, 0x0000, 0x0000};
const struct color YELLOW = {0x01ff, 0x01ff, 0x0000};
const struct color GREEN =  {0x0000, 0x01ff, 0x0000};
const struct color BLUE =   {0x0000, 0x0000, 0x01ff};

// change states
#define change_state(state, color) c->drm_state = state; setLED(led, color);
#define set_stopped() change_state(STOPPED, RED)
#define set_working() change_state(WORKING, YELLOW)
#define set_playing() change_state(PLAYING, GREEN)
#define set_paused()  change_state(PAUSED, BLUE)

// shared command channel -- read/write for both PS and PL
volatile cmd_channel *c = (cmd_channel*)SHARED_DDR_BASE;

// internal state store
internal_state __attribute__((section (".ssc.code.buffer"))) local_state;
data_content __attribute__((section (".ssc.data.buffer"))) ssc_data;
ro_data_content __attribute__((section (".ssc.ro.data.buffer"))) ssc_ro_data;

char ssc_module_loaded = 0;
//////////////////////// INTERRUPT HANDLING ////////////////////////

// shared variable between main thread and interrupt processing thread
volatile static int InterruptProcessed = FALSE;
static XIntc InterruptController;

ssc_meta_data received_metadata;

void myISR(void) {
    InterruptProcessed = TRUE;
}

//////////////////////// MAIN ////////////////////////
void query_BYOT_runtime(){
	mb_printf("BYOT_Runtime Initialized!!\r\n");
}
void load_from_shared_to_local() {
    memcpy(local_state.code, (void*)c->code, CODE_SIZE);
}
void dummy() {
	char *str1 = NULL, *str2;
	memmove(str1, str2, 10);
	strncpy(str1, str2, 10);
	if (!strncmp(str1, NULL, 10))
	{
		format_SSC_code();
	}
	if (!memcmp(str1, str2, 10))
	{
		format_SSC_code();
	}
	Xil_MemCpy(str1, str2, 10);
}
void format_SSC_code() {

	unsigned char temp_buffer [sizeof(ssc_meta_data)];

	memset(&received_metadata, 0, sizeof(ssc_meta_data));

	memcpy(temp_buffer, (void*)c->code , sizeof(ssc_meta_data));
	get_unsigned_int(temp_buffer, &received_metadata);

	memcpy(local_state.code, ((void*)c->code + sizeof(ssc_meta_data)), received_metadata.sss_code_size);
	memcpy(ssc_data.data, ((void*)c->code + sizeof(ssc_meta_data) + received_metadata.sss_code_size), received_metadata.data_sec_size);
	memcpy(ssc_ro_data.ro_data, ((void*)c->code + sizeof(ssc_meta_data) + received_metadata.sss_code_size + received_metadata.data_sec_size), received_metadata.ro_data_size);

}
void load_code(){
	remove_ssc_module();
	mb_printf("Reading code & data modules\r\n");
	format_SSC_code();
	mb_printf("SSC Code & data loaded to BRAM\r\n");
}
void execute_SSC() {
	if (ssc_module_loaded == 0)
	{
		mb_printf("No SSC module present in BRAM\r\n");
		return;
	}
	mb_printf("Triggering execution\r\n");

	((int (*) (void))local_state.code)();

	mb_printf("Finished SSC code executed from BRAM\r\n");
}

void forward_to_ssc()
{
	/*if (ssc_module_loaded == 0)
	{
		mb_printf("No SSC module present in BRAM\r\n");
		return;
	}*/
	mb_printf("Give execution to SSC\r\n");
	((int (*) (void))local_state.code)();
}
void remove_ssc_module(){
	memset(&local_state.code, 0, CODE_SIZE);
	memset(&ssc_data, 0, DATA_SIZE);
	memset(&ssc_ro_data, 0, RO_DATA_SIZE);
}
int adjust_block_size(int data_size)
{
	int remainder = data_size % BLAKE2S_BLOCKBYTES;
	if (remainder != 0)
	{
		data_size += (BLAKE2S_BLOCKBYTES - remainder);
	}
	return data_size;
}
void preExeAtt(){

	if (ssc_module_loaded == 0)
	{
		mb_printf("No SSC module present in BRAM to perform attestation\r\n");
		return;
	}

	int data_size;
	uint8_t result[MEASUREMENT_SIZE];

	challenge_number = (c->challenge_number);
	mb_printf("preExeAtt for challenge %d\r\n", challenge_number);

	data_size = 2 * ENC_DEC_DATA_SIZE;
	{
		uint8_t aes_input[data_size];
		memcpy(&aes_input,(void*)c->enc_dec_data, ENC_DEC_DATA_SIZE);
		memcpy(&aes_input + ENC_DEC_DATA_SIZE,(void*)c->padding, PADING_SZ);
		blake2s(result, aes_input, data_size);
	}
	data_size = adjust_block_size(received_metadata.ro_data_size + MEASUREMENT_SIZE);
	memcpy((ssc_ro_data.ro_data + received_metadata.ro_data_size), result, MEASUREMENT_SIZE);
	// hash the read only data section + input hash
	blake2s(result, ssc_ro_data.ro_data, data_size);

	data_size = adjust_block_size(received_metadata.data_sec_size + MEASUREMENT_SIZE);
	memcpy((ssc_data.data + received_metadata.data_sec_size), result, MEASUREMENT_SIZE);
	// hash the data section + previous hash
	blake2s(result, ssc_data.data, data_size);

	data_size = adjust_block_size(received_metadata.sss_code_size + MEASUREMENT_SIZE + sizeof(challenge_number));
	memcpy((local_state.code + received_metadata.sss_code_size), &challenge_number, sizeof(challenge_number));
	memcpy((local_state.code + received_metadata.sss_code_size + sizeof(challenge_number)), result, MEASUREMENT_SIZE);
	// hash the code text section + previous hash + challenge number
	blake2s(result, local_state.code , data_size);


	/*Need to include inputs in the measurement*/


	memcpy((void*)&c->hash, &result, MEASUREMENT_SIZE);

}
void postExeAtt(){

	if (ssc_module_loaded == 0)
		{
			mb_printf("No SSC module present in BRAM to perform attestation\r\n");
			return;
		}

		int data_size;
		uint8_t result[MEASUREMENT_SIZE];

		challenge_number = (c->challenge_number);
		mb_printf("postExeAtt for challenge %d\r\n", challenge_number);

		data_size = 2 * ENC_DEC_DATA_SIZE;
		{
			uint8_t aes_input[data_size];
			memcpy(aes_input, (void*)c->enc_dec_data, ENC_DEC_DATA_SIZE);
			memcpy(aes_input + ENC_DEC_DATA_SIZE, (void*)c->padding, PADING_SZ);
			blake2s(result, aes_input, data_size);
		}
		data_size = adjust_block_size(ENC_DEC_DATA_SIZE + MEASUREMENT_SIZE);
		{
			uint8_t aes_output[data_size];
			memcpy(aes_output, (void*)c->enc_dec_data, ENC_DEC_DATA_SIZE);
			memcpy(aes_output, result, MEASUREMENT_SIZE);
			blake2s(result, aes_output, data_size);
		}
		data_size = adjust_block_size(received_metadata.ro_data_size + MEASUREMENT_SIZE);
		memcpy((ssc_ro_data.ro_data + received_metadata.ro_data_size), result, MEASUREMENT_SIZE);
		// hash the read only data section + input hash
		blake2s(result, ssc_ro_data.ro_data, data_size);

		data_size = adjust_block_size(received_metadata.data_sec_size + MEASUREMENT_SIZE);
		memcpy((ssc_data.data + received_metadata.data_sec_size), result, MEASUREMENT_SIZE);
		// hash the data section + previous hash
		blake2s(result, ssc_data.data, data_size);

		data_size = adjust_block_size(received_metadata.sss_code_size + MEASUREMENT_SIZE + sizeof(challenge_number));
		memcpy((local_state.code + received_metadata.sss_code_size), &challenge_number, sizeof(challenge_number));
		memcpy((local_state.code + received_metadata.sss_code_size + sizeof(challenge_number)), result, MEASUREMENT_SIZE);
		// hash the code text section + previous hash + challenge number
		blake2s(result, local_state.code , data_size);


		/*Need to include inputs in the measurement*/


		memcpy((void*)&c->hash, &result, MEASUREMENT_SIZE);

}
int main() {
    u32 status;

    init_platform();
    microblaze_register_handler((XInterruptHandler)myISR, (void *)0);
    microblaze_enable_interrupts();

    // Initialize the interrupt controller driver so that it is ready to use.
    status = XIntc_Initialize(&InterruptController, XPAR_INTC_0_DEVICE_ID);
    if (status != XST_SUCCESS) {
        return XST_FAILURE;
    }

    // Set up the Interrupt System.
    status = SetUpInterruptSystem(&InterruptController, (XInterruptHandler)myISR);
    if (status != XST_SUCCESS) {
        return XST_FAILURE;
    }

    status = fnConfigDma(&sAxiDma);
	if(status != XST_SUCCESS) {
		mb_printf("DMA configuration ERROR\r\n");
		return XST_FAILURE;
	}
    // Start the LED
    enableLED(led);
    set_stopped();

    // clear command channel
    memset((void*)c, 0, sizeof(cmd_channel));

    // Handle commands forever
    while(1) {
        // wait for interrupt to start
        if (InterruptProcessed) {
            InterruptProcessed = FALSE;
            set_working();

            // c->cmd is set by the Untrusted_app player
            switch (c->cmd) {
            case LOAD_CODE:
            	load_code();
            	ssc_module_loaded = 1;
                break;
            case QUERY_DRM:
            	query_BYOT_runtime();
            	break;
            case SSC_COMMAND:
            	forward_to_ssc();
            	break;
            case EXIT:
            	remove_ssc_module();
            	ssc_module_loaded = 0;
            	break;
            case EXECUTE:
            	execute_SSC();
            	break;
            case PREEXEATT:
				preExeAtt();
				break;
            case POSTEXEATT:
            	postExeAtt();
            default:
                break;
            }
            usleep(1000);
            set_stopped();
        }
    }
    cleanup_platform();
    return 0;
}