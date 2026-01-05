#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
  int nums=0,even=0,sum_even=0,odd=0,sum_odd=0;
  while (((nums=(int)getchar())-48)!=0)
    {
      if (isalnum((char)(nums))) // is number
	{
	  if (((int)nums-48)%2) // is odd
	    {
	      odd++;
	      sum_odd+=(int)nums-48;
	    }
	  else // is even
	    {
	      even++;
	      sum_even+=(int)nums-48;
	    }
	}
    }
  if (odd==0)
    printf("None of them is odd.\n");
  else
    printf("odd\tquantity:%d\taverage:%f\n",odd,(float)sum_odd/(float)odd);
  if (even==0)
    printf("None of them is even.\n");
  else
    printf("even\tquantity:%d\taverage:%f\n",even,(float)sum_even/(float)even);
  return EXIT_SUCCESS;
}
