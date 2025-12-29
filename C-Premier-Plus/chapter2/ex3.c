// 2.12编程练习3
// 编写一个程序，把输入的年龄转换成天数，不考虑闰年
#include <stdio.h>
#include <stdlib.h>
int main (void){
  int age, days;
  age = 24;
  days = age * 365;
  printf("You are %d years old.\n", age);
  printf("You've lived for %d days.\n", days);
  return EXIT_SUCCESS;
}
