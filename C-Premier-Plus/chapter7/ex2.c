#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  char ch[8];
  int index=0;
  int index2=0;
  printf("Type in some alphabets: ");
  while ((ch[index%8]=getchar())!='#')
    {
      if (index>1&&index%8==0)
	{
	  for (index2=0;
	       index2<8;
	       index2++)
	    printf("'%c':%-4d",ch[index2],(int)ch[index2]);
	  printf("\n");
	}
      index++;
    }
  printf("\n");
  return EXIT_SUCCESS;
}
