

#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "xil_exception.h"
#include "xstatus.h"
#include "xaxidma.h"
#include "xil_mem.h"
#include "util.h"
#include "xintc.h"
#include "constants.h"
#include "sleep.h"
#include "LedHeader.h"

const struct color RED =    {0x01ff, 0x0000, 0x0000};
const struct color YELLOW = {0x01ff, 0x01ff, 0x0000};
const struct color GREEN =  {0x0000, 0x01ff, 0x0000};
const struct color BLUE =   {0x0000, 0x0000, 0x01ff};

int _test()
{
	main();
    return 1000;
}

int main()
{
   // init_platform();
    u32 *led = (u32*) XPAR_RGB_PWM_0_PWM_AXI_BASEADDR;
    xil_printf("Hello World\n\r");
    setLED(led, BLUE);
    //cleanup_platform();
    return 1000;
}