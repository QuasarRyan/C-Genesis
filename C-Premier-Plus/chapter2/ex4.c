/* 编写一个程序，生成以下输出
   For he's a jolly good fellow!
   For he's a jolly good fellow!
   For he's a jolly good fellow!
   Which nobody can deny! */
// 除了main()函数以外，自定义两个函数：jolly()用于输出前三天信息，deny()用于输出最后一行消息
#include <stdio.h>
#include <stdlib.h>
void jolly(void);
void deny(void);
int main (void) {
  jolly();
  deny();
  return EXIT_SUCCESS;
}
void jolly (void) {
  printf("For he's a jolly good fellow!\n");
  printf("For he's a jolly good fellow!\n");
  printf("For he's a jolly good fellow!\n");
}
void deny () {
  printf("Which nobody can deny!\n");
}
