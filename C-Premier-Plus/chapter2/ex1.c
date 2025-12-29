// 2.12编程练习1
#include <stdio.h>
#include <stdlib.h> //EXIT_SUCCESS是由这个包导入的

int main (void) {
  // 调用一次printf函数打印自己的名字
  printf("Quasar Ryan\n");
  // 调用一次printf函数将自己的名字打成两行
  printf("Quasar\nryan\n");
  // 调用两次printf函数将自己的名字打成一行
  printf("Quasar ");
  printf("Ryan\n");
  return EXIT_SUCCESS;
}
