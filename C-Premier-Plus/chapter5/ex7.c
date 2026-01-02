#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  long double num, cube();
  num = cube();
  printf("%Lf\n", num);
  return EXIT_SUCCESS;
}

long double cube (void)
{
  printf("Type in a float number: ");
  double n=0.;
  scanf("%lf", &n);
  return n * n * n;
}
