/* 编写一个程序，生成以下输出
   Brazil, Russia, India, China
   India, China
   Brazil, Russia
   除了main()以外，该程序还要调两个自定义函数：
   br()打印Brazil, Russia
   ic()打印India, China
   其余内容在main()中完成 */
#include <stdio.h>
#include <stdlib.h>
void br(void);
void ic(void);
int main (void) {
  br();
  printf(", ");
  ic();
  printf("\n");
  ic();
  printf("\n");
  br();
  printf("\n");
  return EXIT_SUCCESS;
}
void br (void) {
  printf("Brazil, Russia");
}
void ic (void) {
  printf("India, China");
}
   
