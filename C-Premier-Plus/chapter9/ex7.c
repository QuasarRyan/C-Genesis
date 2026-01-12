#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void alphabet (char);

int main (void)
{
  char ch='\0';
  while ((ch=getchar())!=EOF)
    alphabet(ch);
  return EXIT_SUCCESS;
}

void alphabet (char ch)
{
  if (isalpha(ch))
    {
      printf("%c is an alphabet, ",ch);
      printf("and its position is %d\n",(isupper(ch))?(int)ch-64:(int)ch-96);
    }
  else
    printf("%c is not an alphabet.\n",ch);
}
