// 1个水分子大约有3.0x10E-23g，1夸脱（quart）的水有950g，提示输入夸脱数，返回质量
#include <stdio.h>
#include <stdlib.h>

int main (void) {
  printf("How may quart of water is there?\n_________\b\b\b\b\b\b\b");
  long double gram_per_water = 3.0*10E-23, gram_of_quart = 950;
  int quart = 0;
  scanf("%d", &quart);
  printf("%Lf\n", quart * gram_of_quart / gram_per_water);
  return EXIT_SUCCESS;
}
