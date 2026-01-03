#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int length=0,index=0;
  long double sum1=0.,sum2=0.;
  int add=1;
  printf("Type in the length(<=0 to quit): ");
  scanf("%d", &length);
  while (length > 0)
    {
      sum1=(long double)0.;
      sum2=(long double)0.;
      for (index=1, add=1;
	   index<length+1;
	   index++, add*=-1)
	{
	  sum1+=(long double)(1./(float)index);
	  sum2+=(long double)((1./(float)index)*add);
	}
      printf("sum1=%Lf\nsum2=%Lf\n",sum1,sum2);
      printf("Type in the length(<=0 to quit): ");
      scanf("%d", &length);
    }
  return EXIT_SUCCESS;
}
