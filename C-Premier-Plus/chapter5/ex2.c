// 输入一个整数，输出所有比它大不超过10的数
#include <stdio.h>
#include <stdlib.h>
int num=0;
int main (void) {
  printf("输入一个数：___________\b\b\b\b\b\b\b\b\b\b");
  scanf("%d", &num);
  int tmp = num + 10;
  while (num++ < tmp) {
    printf("%d\t", num);
  }
  printf("\n");
  return EXIT_SUCCESS;
}
