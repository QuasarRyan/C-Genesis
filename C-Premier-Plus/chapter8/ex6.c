#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
  int ch;
  ch=getchar();
  while (isblank(ch)||!isprint(ch))
    ch=getchar();
  while (getchar()!='\n')
    continue;
  printf("The first non blank character is \"%c\"\n",ch);
  return EXIT_SUCCESS;
}
