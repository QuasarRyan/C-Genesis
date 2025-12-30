// 在美国体积测量体系中1品脱（pint）等于2杯（cup），1杯等于8盎司（fluid ounce）
// 1盎司等于2大汤勺，1大汤勺等于3茶勺，提示输入杯数，并以其余单位显示等价容量
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  float cup = 0;
  printf("多少杯_____\b\b\b\b");
  scanf("%f", &cup);
  printf("%f品脱\n%f盎司\n%f汤勺\n%f茶勺\n",cup/2,cup*8,cup*8*2,cup*8*2*3);
  return EXIT_SUCCESS;
}
