#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int cal=0,ei=0;
  char ch;
  while ((ch=getchar())!='#')
    {
      if (ch=='e')
	{
	  ei++;
	  continue;
	}
      if ((ch=='i')&&ei)
	{
	  cal++;
	}
      ei=0;
    }
  printf("\"ei\": %d\n",cal);
  return EXIT_SUCCESS;
}
