// 将用户输入的分钟数转换成小时+分钟，直到用户输入不大于零为止
#include <stdio.h>
#include <stdlib.h>
#define m_p_h 60 // minutes per hour
int main (void) {
  int minute,hour;
  printf("minute:_____\b\b\b\b");
  scanf("%d", &minute);
  while (minute > 0) {
    hour = minute / m_p_h;
    minute = minute % hour;
    printf("%dh%dm\n\n",hour,minute);
    printf("minute:_____\b\b\b\b");
    scanf("%d", &minute);
  }
  return EXIT_SUCCESS;
}

