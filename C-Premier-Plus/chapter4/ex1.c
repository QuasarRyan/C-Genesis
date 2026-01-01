// 输入名和姓，然后以“名，姓”的形式打印出来
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  printf("Type in your first name：________\b\b\b\b\b\b");
  char first_name[20];
  scanf("%s", first_name);
  printf("Type in your last name：________\b\b\b\b\b\b");
  char last_name[20];
  scanf("%s", last_name);
  printf("%s, %s\n", first_name, last_name);
  return EXIT_SUCCESS;
}
