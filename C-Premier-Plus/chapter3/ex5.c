// 一年大约有3.156x10e7秒，提示输入用户年龄，显示该年龄对应的秒数
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  long sec_per_year = 3.156*10E7, age = 0, total_sec = 0;
  printf("How old are you?\n_____\b\b\b\b");
  scanf("%ld", &age);
  total_sec = sec_per_year * age;
  printf("%ld\n", total_sec);
  return EXIT_SUCCESS;
}
