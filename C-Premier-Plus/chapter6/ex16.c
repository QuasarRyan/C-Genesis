#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  double daphne=100.,deirdre=100.,profit=0.;
  int year=0;
  profit=100*0.1;
  do
    {
      daphne+=profit;
      deirdre*=1.05;
      year++;
    }while (daphne > deirdre);
  printf("%d years\n",year);
  return EXIT_SUCCESS;
}
