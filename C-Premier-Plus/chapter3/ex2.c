// 提示输入一个ASCII的值，然后打印输入的字符
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  int ascii=0;
  printf("Type in a ASCII value:___\b\b\b");
  scanf("%d", &ascii);
  printf("The character is %c\n", ascii);
  return EXIT_SUCCESS;
}
