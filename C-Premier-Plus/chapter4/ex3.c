// 输入一个浮点数，以如下格式打印
// The input is 21.3 or 2.1e+001.
// The input is +21.290 or 2.129E+001.
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  float f=0.0;
  printf("Type in a float: ");
  scanf("%f", &f);
  printf("The input is %.1f or %.1e.\n", f, f);
  printf("The input is %+.3f or %+.3E.\n", f, f);
  return EXIT_SUCCESS;
}
