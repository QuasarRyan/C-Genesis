#include <stdio.h>
#include <stdlib.h>

void sort (double *,double *,double *);
void swap (double *,double *);

int main (void)
{
  double a=0.,b=0.,c=0.;
  printf("a=");
  scanf("%lf",&a);
  while (getchar()!='\n') continue;
  printf("b=");
  scanf("%lf",&b);
  while (getchar()!='\n') continue;
  printf("c=");
  scanf("%lf",&c);
  while (getchar()!='\n') continue;
  sort(&a,&b,&c);
  printf("a=%g\nb=%g\nc=%g\n",a,b,c);
  return EXIT_SUCCESS;
}

void sort (double * pa,double * pb,double * pc)
{
  if (*pa>*pb)
    swap(pa,pb);
  if (*pa>*pc)
    swap(pa,pc);
  if (*pb>*pc)
    swap(pb,pc);
}

void swap (double * px,double * py)
{
  double ps=*px;
  *px=*py;
  *py=ps;
}

