#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  double chuckie=1000000.;
  int year=0;
  while (chuckie>0)
    {
      chuckie*=1.08;
      chuckie-=100000;
      year++;
    }
  printf("%d years\n", year);
  return EXIT_SUCCESS;
}
