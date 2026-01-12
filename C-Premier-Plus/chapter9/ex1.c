#include <stdio.h>
#include <stdlib.h>

double min (double a,double b);

int main (void)
{
  double a=0.,b=0.;
  printf("a=");
  scanf("%lf",&a);
  while (getchar()!='\n') continue;
  printf("b=");
  scanf("%lf",&b);
  while (getchar()!='\n') continue;
  printf("min(a,b)=%g\n",min(a,b));
  return EXIT_SUCCESS;
}

double min (double a,double b)
{
  return (a < b) ? a : b;
}
