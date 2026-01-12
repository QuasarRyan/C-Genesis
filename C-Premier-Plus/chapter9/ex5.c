#include <stdio.h>
#include <stdlib.h>

void larger_of (double * px,double * py);

int main (void)
{
  double a=0.,b=0.;
  printf("a=");
  scanf("%lf",&a);
  while (getchar()!='\n') continue;
  printf("b=");
  scanf("%lf",&b);
  while (getchar()!='\n') continue;
  larger_of(&a,&b);
  printf("a=%g\nb=%g\n",a,b);
  return EXIT_SUCCESS;
}

void larger_of (double * px,double * py)
{
  *px=*py=(*px>*py)?*px:*py;
}
