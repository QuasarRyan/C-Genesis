/* 生成以下格式的输出：
   Smile!Smile!Smile!
   Smile!Smile!
   Smile!
   该程序要定义一个函数，该函数被调用一次打印一次Smile!，根据程序的需要使用该函数 */
#include <stdio.h>
#include <stdlib.h>
void smile (void);
int main (void) {
  smile();
  smile();
  smile();
  printf("\n");
  smile();
  smile();
  printf("\n");
  smile();
  printf("\n");
  return EXIT_SUCCESS;
}
void smile (void) {
  printf("Smile!");
}
