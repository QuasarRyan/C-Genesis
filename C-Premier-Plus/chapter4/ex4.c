// 提示输入用户身高（厘米），和姓名，然后以下面的格式输出：
// Dabney, you are 1.74 meter tall.
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  char name[40];
  float height=0;
  printf("Type in your name:");
  scanf("%s", name);
  printf("Type in your height:");
  scanf("%f", &height);
  printf("%s, you are %.2f meter tall.\n", name, height/100);
  return EXIT_SUCCESS;
}
