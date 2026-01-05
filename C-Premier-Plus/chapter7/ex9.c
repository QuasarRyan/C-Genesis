#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int p_i=1;
  int prime,x;
  printf("Type in a positive integer: ");
  scanf("%d",&p_i);
  if (p_i>0)
    do {
      if (p_i>2)
	{
	  printf("2 ");
	  for (prime=0;
	       prime<=p_i;
	       prime++)
	    {
	      for (x=2;
		   x<prime;
		   x++)
		{
		  if (!(prime%x))
		    break;
		  else if (x==prime-1)
		    printf("%d ",prime);
		}
	    }
	}
      else if (p_i==2)
	printf("%d ",p_i);
      printf("\n");
      printf("Type in a positive integer: ");
      scanf("%d",&p_i);
    }while(p_i>0);
  printf("It's not positive.\n");
  return EXIT_SUCCESS;
}
