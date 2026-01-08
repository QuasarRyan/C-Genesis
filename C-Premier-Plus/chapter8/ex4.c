#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
  char ch;
  int words=0,count=0,total=0;
  printf("Type in some words:");
  while ((ch=(getchar()))!=EOF)
    {
      if (iscntrl(ch)||isblank(ch)||isdigit(ch)||ispunct(ch)||isspace(ch))
	{
	  if (count>0)
	    {
	      total+=count;
	      words++;
	      count=0;
	      continue;
	    }
	}
      if (isprint(ch))
	{
	  count++;
	}
    }
  if (words==0)
    words=1;
  printf("\nThere's an average of %.4f alphabet per word\n",(float)total/(float)words);
  return EXIT_SUCCESS;
}

