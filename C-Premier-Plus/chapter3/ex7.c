// 1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高
# include <stdio.h>
# include <stdlib.h>
int main (void) {
  printf("Type in your height:_____\b\b\b\b\b");
  float height = 0;
  scanf("%f", &height);
  printf("%fcm\n", height * 2.54);
  return EXIT_SUCCESS;
}
