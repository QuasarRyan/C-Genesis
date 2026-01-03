// 倒叙打印
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{
  char word[45];
  printf("Type in a single word: ");
  scanf("%s", word);
  char result[strlen(word)];
  int index;
  for (index=strlen(word)-1;
       index>=0;
       index--)
    result[strlen(word)-index-1]=word[index];
  printf("%s\n", result);
  return EXIT_SUCCESS;
}
