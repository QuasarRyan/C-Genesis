// 输入一个浮点，先打印成小数点形式，再是指数形式，最后是p计数法（十六进制）
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  double num;
  printf("Enter a floating-point value:______________\b\b\b\b\b\b\b\b\b\b\b");
  scanf("%lf", &num);
  printf("fixed-point notation: %f\nexponential notation: %e\np notation: %a\n", num, num, num);
  return EXIT_SUCCESS;
}
