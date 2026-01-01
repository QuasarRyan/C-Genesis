/* 编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。接下来，使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示小数点后面1位数字。注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。使用#define 创建符号常量或使用 const限定符创建变量来表示两个转换系数。*/
#include <stdio.h>
#include <stdlib.h>
const float EU_TO_US = 1.609/3.785;
int main (void) {
  float distance = 0.0;
  float oil = 0.0;
  printf("How many kilometers have you driven? ________\b\b\b\b\b\b");
  scanf("%f", &distance);
  printf("How many liters oil has been used? ________\b\b\b\b\b\b");
  scanf("%f", &oil);
  printf("%.1fGal/Mi\n", distance/oil*EU_TO_US);
  return EXIT_SUCCESS;
}

