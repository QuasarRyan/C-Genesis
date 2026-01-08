#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  char ch;
  int res;
  res=0;
  printf("Type in some words(Ctrl-D to quit): ");
  while ((ch=getchar())!=EOF)
    {
      if (ch!='\n')
	res++;
    }
  printf("Characters: %d\n",res);
  return EXIT_SUCCESS;
}
