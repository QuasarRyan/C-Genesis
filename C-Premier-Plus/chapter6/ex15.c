#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{
  int index=0;
  char str[256];
  printf("Type in some alphabets: ");
  scanf("%255[^\n]",str);
  for (index=0;
       index<strlen(str);
       index++)
    {
      printf("%c", str[strlen(str)-index-1]);
    }
  printf("\n");
  return EXIT_SUCCESS;
}
