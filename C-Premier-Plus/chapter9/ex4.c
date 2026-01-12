#include <stdio.h>
#include <stdlib.h>

double harmonic_mean (double x,double y);

int main (void)
{
  double a=0.,b=0.;
  while ((a==0.)&&(b==0.))
    {
      printf("a=");
      scanf("%lf",&a);
      while (getchar()!='\n') continue;
      printf("b=");
      scanf("%lf",&b);
      while (getchar()!='\n') continue;
    }
  printf("The harmonic mean of a and b is %g\n",harmonic_mean(a,b));
  return EXIT_SUCCESS;
}

double harmonic_mean (double x,double y)
{
  long double res;
  res = 2./(1./(long double)x+1./(long double)y);
  return (double)res;
}
