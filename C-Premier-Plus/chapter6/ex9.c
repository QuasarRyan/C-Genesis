#include <stdio.h>
#include <stdlib.h>
double delta_devided_by_multiply(float a, float b);
int main (void)
{
  float a,b;
  printf("Type in the two float numbers: ");
  while (scanf("%f%f", &a, &b) == 2)
    printf("%f\nType in the two float numbers: ", (float)delta_devided_by_multiply(a,b));
  return EXIT_SUCCESS;
}
double delta_devided_by_multiply(float a, float b)
{
  return 1/(double)b-1/(double)a;
}
