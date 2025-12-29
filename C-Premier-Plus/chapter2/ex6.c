// 设置整形变量toes，打印toes、toes的两倍、toes的平方，并分别描述加以区分
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  int toes, double_toes, square_toes;
  toes = 10;
  double_toes = toes * 2;
  square_toes = toes * toes;
  printf("toes = %d\n", toes);
  printf("double toes = %d\n", double_toes);
  printf("square toes = %d\n", square_toes);
  return EXIT_SUCCESS;
}
