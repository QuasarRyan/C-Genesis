#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char ch;
  int changes=0;
  printf("Type in: ");
  while ((ch=getchar())!='#')
    {
      if (ch!='!'&&ch!='.')
	putchar(ch);
      else
	{
	  changes++;
	  if (ch=='!')
	    {
	      puts("!!");
	      continue;
	    }
	  if (ch=='.')
	    putchar('!');
	}
    }
  printf("\nreplace: %d\n",changes);
  return EXIT_SUCCESS;
}
