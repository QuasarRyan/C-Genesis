#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int upper=0,lower=0,delta=0;
  long long sum=0;
  printf("Type in the lower and upper bounds: ");
  scanf("%d%d",&lower,&upper);
  while (lower<upper)
  {
    sum=0;
    for (delta=lower;
	 delta<upper+1;
	 delta++)
    {
      sum += delta*delta;
    }
    printf("%lld\n",sum);
    printf("Type in the lower and upper bounds: ");
    scanf("%d%d",&lower,&upper);
  }
  printf("Done");
  return EXIT_SUCCESS;
}
