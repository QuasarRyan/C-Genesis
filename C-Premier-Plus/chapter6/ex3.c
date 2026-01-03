#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  char output='F';
  int delta1=0,delta2=0;
  for (delta1=0;
       delta1<6;
       delta1++)
  {
    for (delta2=0;
	 delta2<delta1+1;
	 delta2++)
      printf("%c",(char)((int)output-delta2));
    printf("\n");
  }
  return EXIT_SUCCESS;
}
