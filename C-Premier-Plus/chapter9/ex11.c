#include <stdio.h>
#include <stdlib.h>

unsigned long long Fibonacci (unsigned int);

int main (void)
{
  unsigned int n;
  unsigned int i;
  scanf("%u",&n);
  for (i=0;
       i<n;
       i++)
    printf("%llu ",Fibonacci(i));
  putchar('\n');
  return EXIT_SUCCESS;
}

unsigned long long Fibonacci (unsigned int n)
{
  unsigned long long res = 0;
  unsigned long long a = 0;
  unsigned long long b = 1;
  unsigned long long c = 1;
  unsigned int i;
  for (i=3;
       i<n+1;
       i++)
    {
      if (i%3==0)
	a=b+c;
      if (i%3==1)
	b=a+c;
      if (i%3==2)
	c=a+b;
    }
  if (n%3==0)
    res=a;
  if (n%3==1)
    res=b;
  if (n%3==2)
    res=c;
  return res;
}
