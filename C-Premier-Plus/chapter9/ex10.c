#include <stdio.h>
#include <stdlib.h>

void to_binary (unsigned long,unsigned short int);

int main (void)
{
  unsigned long number;
  unsigned short int p;
  printf("Enter an integer (q to quir): \n");
  while (scanf("%lu %hd",&number,&p)==2)
    {
      while (getchar()!='\n') continue;
      if (p<2||p>10)
	{
	  printf("The second number should be >=2 or <=10.\n");
	  continue;
	}
      printf("Binary Equivalent: ");
      to_binary(number,p);
      putchar('\n');
      printf("Enter an integer (q to quir): \n");
    }
  printf("Done.\n");
  return EXIT_SUCCESS;
}

void to_binary (unsigned long n,unsigned short int p)
{
  int r;
  r=n%p;
  if (n>=p)
    to_binary(n/p,p);
  printf("%d",r%p);
  return;
}
