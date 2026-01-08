#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
  int lower=0,upper=0;
  char ch;
  printf("Type in some words: ");
  while ((ch=getchar())!=EOF)
    {
      if (islower(ch))
	{
	  lower++;
	  continue;
	}
      if (isupper(ch))
	{
	  upper++;
	  continue;
	}
    }
  printf("lowercase letter: %d\nuppercase letter: %d\n",lower,upper);
  return EXIT_SUCCESS;
}
