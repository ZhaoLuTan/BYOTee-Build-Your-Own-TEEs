

/* This scale factor will be changed to equalise the runtime of the
   benchmarks. */
#define LOCAL_SCALE_FACTOR 1231

#ifdef DO_TRACING		// ON PC

#include <stdio.h>
#define TRACE(x) trace((x))
#undef TEST			/* finished testing! */
void
trace (char *s)
{
  printf ("%s\n", s);
}

#else // ON TARGET

#define TRACE(x)
#undef TEST

#endif

volatile int P1_is_marked = 3;
volatile long P1_marking_member_0[3];
volatile int P2_is_marked = 5;
volatile long P2_marking_member_0[5];
volatile int P3_is_marked = 0;
volatile long P3_marking_member_0[6];

void
initialise_benchmark (void)
{
}


static int benchmark_body (int  rpt);

void
warm_caches (int  heat)
{
  int  res = benchmark_body (heat);

  return;
}
#define CPU_MHZ 1

int
benchmark (void)
{
  return benchmark_body (LOCAL_SCALE_FACTOR * CPU_MHZ);
}


/**void NSicherNeu()**/
static int __attribute__ ((noinline))
benchmark_body (int rpt)
{
  int j;

  for (j = 0; j < rpt; j++)
    {
      P1_is_marked = 3;
      P2_is_marked = 5;
      P3_is_marked = 0;

      /* Permutation for Place P1 : 0, 1, 2 */
      /* Transition T1 */
      if ((P1_is_marked >= 3) &&
	  (P3_is_marked + 3 <= 6) &&
	  (P1_marking_member_0[1] == P1_marking_member_0[2]))
	{

	  long x;
	  long y;
	  long z;

	  x = P1_marking_member_0[0];
	  y = P1_marking_member_0[1];

	  /* Transition condition */
	  if (x < y)
	    {

	      /* demarking of input places */
	      P1_is_marked -= 3;

	      /* preaction */
	      z = x - y;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = x;
	      P3_marking_member_0[P3_is_marked + 1] = y;
	      P3_marking_member_0[P3_is_marked + 2] = z;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P1 : 0, 2, 1 */
      /* Transition T1 */
      if ((P1_is_marked >= 3) &&
	  (P3_is_marked + 3 <= 6) &&
	  (P1_marking_member_0[2] == P1_marking_member_0[1]))
	{

	  long x;
	  long y;
	  long z;

	  x = P1_marking_member_0[0];
	  y = P1_marking_member_0[2];

	  /* Transition condition */
	  if ((x < y))
	    {


	      /* demarking of input places */
	      P1_is_marked -= 3;

	      /* preaction */
	      z = x - y;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = x;
	      P3_marking_member_0[P3_is_marked + 1] = y;
	      P3_marking_member_0[P3_is_marked + 2] = z;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P1 : 1, 0, 2 */
      /* Transition T1 */
      if ((P1_is_marked >= 3) &&
	  (P3_is_marked + 3 <= 6) &&
	  (P1_marking_member_0[0] == P1_marking_member_0[2]))
	{

	  long x;
	  long y;
	  long z;

	  x = P1_marking_member_0[1];
	  y = P1_marking_member_0[0];

	  /* Transition condition */
	  if (x < y)
	    {


	      /* demarking of input places */
	      P1_is_marked -= 3;

	      /* preaction */
	      z = x - y;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = x;
	      P3_marking_member_0[P3_is_marked + 1] = y;
	      P3_marking_member_0[P3_is_marked + 2] = z;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P1 : 1, 2, 0 */
      /* Transition T1 */
      if ((P1_is_marked >= 3) &&
	  (P3_is_marked + 3 <= 6) &&
	  (P1_marking_member_0[2] == P1_marking_member_0[0]))
	{

	  long x;
	  long y;
	  long z;

	  x = P1_marking_member_0[1];
	  y = P1_marking_member_0[2];

	  /* Transition condition */
	  if ((x < y))
	    {


	      /* demarking of input places */
	      P1_is_marked -= 3;

	      /* preaction */
	      z = x - y;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = x;
	      P3_marking_member_0[P3_is_marked + 1] = y;
	      P3_marking_member_0[P3_is_marked + 2] = z;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P1 : 2, 0, 1 */
      /* Transition T1 */
      if ((P1_is_marked >= 3) &&
	  (P3_is_marked + 3 <= 6) &&
	  (P1_marking_member_0[0] == P1_marking_member_0[1]))
	{
	  long x;
	  long y;
	  long z;

	  x = P1_marking_member_0[2];
	  y = P1_marking_member_0[0];

	  /* Transition condition */
	  if ((x < y))
	    {

	      /* demarking of input places */
	      P1_is_marked -= 3;

	      /* preaction */
	      z = x - y;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = x;
	      P3_marking_member_0[P3_is_marked + 1] = y;
	      P3_marking_member_0[P3_is_marked + 2] = z;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P1 : 2, 1, 0 */
      /* Transition T1 */
      if ((P1_is_marked >= 3) &&
	  (P3_is_marked + 3 <= 6) &&
	  (P1_marking_member_0[1] == P1_marking_member_0[0]))
	{
	  long x;
	  long y;
	  long z;

	  x = P1_marking_member_0[2];
	  y = P1_marking_member_0[1];

	  /* Transition condition */
	  if ((x < y))
	    {

	      /* demarking of input places */
	      P1_is_marked -= 3;

	      /* preaction */
	      z = x - y;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = x;
	      P3_marking_member_0[P3_is_marked + 1] = y;
	      P3_marking_member_0[P3_is_marked + 2] = z;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 0, 1, 2, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  (((P3_is_marked + 3) <= 6)) &&
	  (((P2_marking_member_0[1] == P2_marking_member_0[2])) &&
	   ((P2_marking_member_0[1] == P2_marking_member_0[3]))))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 0, 1, 3, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  (((P3_is_marked + 3) <= 6)) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[2])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 0, 2, 1, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[3])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 0, 2, 3, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[1])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 0, 3, 1, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[2])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 0, 3, 2, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[1])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 1, 0, 2, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[3])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 1, 0, 3, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[2])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 1, 2, 0, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[3])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 1, 2, 3, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[0])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 1, 3, 0, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[2])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 3, 2, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[0])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 0, 1, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[3])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 2, 0, 3, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[1])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 2, 1, 0, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[3])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 2, 1, 3, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[0])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 2, 3, 0, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[1])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 2, 3, 1, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[0])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {
	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}

      /* Permutation for Place P2 : 3, 0, 1, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[2])))
	{
	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 0, 2, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 1, 0, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 1, 2, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 2, 0, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 2, 1, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 4) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 1, 2, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 1, 3, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 1, 4, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 1, 4, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 2, 1, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 2, 3, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 2, 4, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 2, 4, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 3, 1, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 3, 2, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 3, 4, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 3, 4, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 4, 1, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 4, 1, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 4, 2, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 4, 2, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 4, 3, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 0, 4, 3, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[0];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 0, 2, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 0, 3, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 0, 4, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 0, 4, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 2, 0, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 2, 3, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 2, 4, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 2, 4, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 3, 0, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 3, 2, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 3, 4, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 3, 4, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 4, 0, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 4, 0, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 4, 2, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 4, 2, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 4, 3, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 1, 4, 3, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[1];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 0, 1, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 0, 3, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 0, 4, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 0, 4, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 1, 0, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 1, 3, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 1, 4, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 1, 4, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 3, 0, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 3, 1, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 3, 4, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 3, 4, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 4, 0, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 4, 0, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 4, 1, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 4, 1, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 4, 3, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 2, 4, 3, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[2];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 0, 1, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 0, 2, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 0, 4, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 0, 4, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 1, 0, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 1, 2, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 1, 4, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 1, 4, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 2, 0, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 2, 1, 4 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[4])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 2, 4, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 2, 4, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[4]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 4, 0, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 4, 0, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 4, 1, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 4, 1, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 4, 2, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 3, 4, 2, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[4] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[4] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[3];
	  b = P2_marking_member_0[4];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 0, 1, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 0, 1, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 0, 2, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 0, 2, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 0, 3, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 0, 3, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[0] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[0] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[0];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 1, 0, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 1, 0, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 1, 2, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 1, 2, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 1, 3, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 1, 3, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[1] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[1] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[1];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 2, 0, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 2, 0, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 2, 1, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[3];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 2, 1, 3 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[3])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 2, 3, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 2, 3, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[2] == P2_marking_member_0[3]) &&
	   (P2_marking_member_0[2] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[2];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 3, 0, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 3, 0, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[0]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 3, 1, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[2];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 3, 1, 2 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[1]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[2])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 3, 2, 0 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[0])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_marking_member_0[0] = P2_marking_member_0[1];
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}


      /* Permutation for Place P2 : 4, 3, 2, 1 */
      /* Transition T2 */
      if ((P2_is_marked >= 5) &&
	  ((P3_is_marked + 3) <= 6) &&
	  ((P2_marking_member_0[3] == P2_marking_member_0[2]) &&
	   (P2_marking_member_0[3] == P2_marking_member_0[1])))
	{

	  long a;
	  long b;
	  long c;

	  a = P2_marking_member_0[4];
	  b = P2_marking_member_0[3];

	  /* Transition condition */
	  if ((b > a))
	    {

	      /* demarking of input places */
	      P2_is_marked -= 4;

	      /* preaction */
	      c = a + b;

	      /* marking of output places */
	      P3_marking_member_0[P3_is_marked + 0] = a;
	      P3_marking_member_0[P3_is_marked + 1] = b;
	      P3_marking_member_0[P3_is_marked + 2] = c;
	      P3_is_marked += 3;

	    }			/* end of if (Transition condition) */
	}
    }

  return 0;
}


int
verify_benchmark (int unused)
{
  int expP1_is_marked = 3;
  long expP1_marking_member_0[3] = { 0, 0, 0 };
  int expP2_is_marked = 5;
  long expP2_marking_member_0[5] = { 0, 0, 0, 0, 0 };
  int expP3_is_marked = 0;
  long expP3_marking_member_0[6] = { 0, 0, 0, 0, 0, 0 };
  int i;
  if (expP1_is_marked != P1_is_marked ||
      expP2_is_marked != P2_is_marked || expP3_is_marked != P3_is_marked)
    {
      return 0;
    }
  // for (i=0; i<3; i++)
  //   printf("%ld, ", P1_marking_member_0[i]);
  // printf("\n");
  // for (i=0; i<5; i++)
  //   printf("%ld, ", P2_marking_member_0[i]);
  // printf("\n");
  // for (i=0; i<6; i++)
  //   printf("%ld, ", P3_marking_member_0[i]);
  // printf("\n");
  for (i = 0; i < 3; i++)
    {
      if (expP1_marking_member_0[i] != P1_marking_member_0[i] ||
	  expP2_marking_member_0[i] != P2_marking_member_0[i] ||
	  expP3_marking_member_0[i] != P3_marking_member_0[i])
	{
	  return 0;
	}
    }
  for (i = 3; i < 5; i++)
    {
      if (expP2_marking_member_0[i] != P2_marking_member_0[i] ||
	  expP3_marking_member_0[i] != P3_marking_member_0[i])
	{
	  return 0;
	}
    }
  for (i = 5; i < 6; i++)
    {
      if (expP3_marking_member_0[i] != P3_marking_member_0[i])
	{
	  return 0;
	}
    }

  return 1;
}

