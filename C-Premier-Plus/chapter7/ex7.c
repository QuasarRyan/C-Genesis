#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  const float tier1=0.15,tier2=0.2,tier3=0.25,rate1=10.,rate2=10.*1.5;
  int hours=0;
  float wage=0.,tax=0.;
  scanf("%d",&hours);
  if (hours<=30)
    wage=hours*rate1;
  else
    wage=40*rate1+(hours-40)*rate2;
  if (wage<=300.)
    tax=wage*tier1;
  else if (300.<wage&&wage<=450)
    tax=300.*tier1+(wage-300.)*tier2;
  else if (wage>450)
    tax=300.*tier1+150*tier2+(wage-450)*tier3;
  printf("Income: %f Tax: %f Net income: %f\n",wage,tax,wage-tax);
  return EXIT_SUCCESS;
}
