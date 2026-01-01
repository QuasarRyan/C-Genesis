// 提示用户输入名，再提示输入姓。在一行打印用户输入的名和姓，
// 下一行分别打印名和姓的字母数，右对齐
// 下一行再打一遍名和姓，再下一行再打一遍字母数但是左对齐。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void) {
  printf("Type in your first name：________\b\b\b\b\b\b");
  char first_name[15];
  scanf("%s", first_name);
  printf("Type in your last name：________\b\b\b\b\b\b");
  char last_name[15];
  scanf("%s", last_name);
  printf("%15s %15s\n", first_name, last_name);
  printf("%15lu %15lu\n", strlen(first_name), strlen(last_name));
  printf("%-15s %-15s\n", first_name, last_name);
  printf("%-15lu %-15lu\n", strlen(first_name), strlen(last_name));
  return EXIT_SUCCESS;
}

  
