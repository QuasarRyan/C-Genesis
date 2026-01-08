#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
  char ch;
  int count;
  count=0;
  printf("Type in some characters(Ctrl-D to quit):");
  while ((ch=getchar())!=EOF)
    {
      count++;
      if (count%10==1)
	printf("\n");
      if (iscntrl(ch))
	{
	  switch ((int)ch)
	    {
	    case 9:
	      printf("\\t  ");
	      break;
	    case 10:
	      printf("\\n  ");
	      break;
	    }
	  continue;
	}
      if (isprint(ch))
	{
	  printf("%-4d",(int)ch);
	}
    }
  printf("%c",10);
  return EXIT_SUCCESS;
}
