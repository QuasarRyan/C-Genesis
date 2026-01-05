#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char ch;
  int changes=0;
  printf("Type in: ");
  while ((ch=getchar())!='#')
    {
      switch (ch)
	{
	case '.':
	  changes++;
	  putchar('!');
	  break;
	case '!':
	  changes++;
	  putchar('!');
	  putchar('!');
	  break;
	default:
	  putchar(ch);
	  break;
	}
    }
  printf("\nreplace: %d\n",changes);
  return EXIT_SUCCESS;
}
