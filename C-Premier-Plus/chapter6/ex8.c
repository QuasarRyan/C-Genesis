#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  float a,b;
  printf("Type in the two float numbers: ");
  while (scanf("%f%f", &a, &b) == 2)
    printf("%f\nType in the two float numbers: ", 1/b-1/a);
  return EXIT_SUCCESS;
}
