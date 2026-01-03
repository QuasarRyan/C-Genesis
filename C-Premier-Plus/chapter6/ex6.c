#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int a=0,b=0;
  printf("Type in the lower bound in the form: ");
  scanf("%d",&a);
  printf("Type in the upper bound in the form: ");
  scanf("%d",&b);
  while ((long long)(a * a * a) <= (long long)b)
  {
    printf("%d %lld %lld\n", a, (long long)a * a, (long long)a * a * a);
    a++;
  }
  return EXIT_SUCCESS;
}
