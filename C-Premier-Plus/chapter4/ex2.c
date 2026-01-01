// 输入名和姓，然后以“名，姓”的形式打印出来
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void) {
  printf("Type in your name：________\b\b\b\b\b\b");
  char name[40];
  scanf("%s", name);
  printf("\"%s\"\n", name);
  printf("\"%-20s\"\n", name);
  printf("\"%20s\"\n", name);
  printf("\" %s  \"\n", name);
  return EXIT_SUCCESS;
}
