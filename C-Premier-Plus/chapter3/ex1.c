// 查看整数上溢、浮点数上溢和浮点数下溢的函数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a;
float b=1E50, c=1E-50;
int main (void) {
  a=pow(2,31);
  printf("a = %d(2 power 31 should be 2147483648)\nb = %f\nc = %f\n", a, b, c);
  return EXIT_SUCCESS;
}
