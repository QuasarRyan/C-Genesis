// 将一个double类型的变量设置为1.0/3.0，再将一个float类型的变量设置为1.0/3.0
// 分别显示两次计算结果各3次：
// 1. 显示小数点后6位 2. 显示小数点后12位 3. 显示小数点后16位
// 使用<float.h>，并显示FLT_BIG和DBL_DIG的值，1.0/3.0的值和这些值一致吗？
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
int main (void) {
  double a = 1.0/3.0;
  float b = 1.0/3.0;
  printf("a保留小数点后6位: %.6f\n", a);
  printf("a保留小数点后12位: %.12f\n", a);
  printf("a保留小数点后16位: %.16f\n", a);
  printf("b保留小数点后6位: %.6f\n", b);
  printf("b保留小数点后12位: %.12f\n", b);
  printf("b保留小数点后16位: %.16f\n", b);
  printf("FLT_BIG=%d\nDBL_DIG=%d\n", FLT_DIG, DBL_DIG);
  return EXIT_SUCCESS;
}
// 结论：float精度一致，double精度不一致
