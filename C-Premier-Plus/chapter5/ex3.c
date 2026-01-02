// 输入天数，转化成周数加天数，直到输入非正值为止
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  int days=0;
  printf("输入天数：_______\b\b\b\b\b\b");
  scanf("%d", &days);
  while (days > 0) {
    printf("%dw%dd\n", (int)days/7, days%7);
    printf("输入天数：_______\b\b\b\b\b\b");
    scanf("%d", &days);
  }
  printf("\n");
  return EXIT_SUCCESS;
}

