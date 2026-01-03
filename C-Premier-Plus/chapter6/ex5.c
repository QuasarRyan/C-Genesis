#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  char target = 'Z';
  char output = 'A'; // 从字母A开始打印
  int blank = 0, length = 0, print = 0;
  printf("Type a captial alphabet: ");
  scanf("%c", &target);
  blank = (int)target - (int)output; // 第一行需要打印的空格数
  for (length = 0;
       length < blank + 1;
       length++)
  {
    for (print = 0; // 打印空格
	 print < blank - length;
	 print ++)
      printf(" ");
    for (print = 0; // 升序打印字母
	 print < length + 1;
	 print++)
      printf("%c",(char)((int)output + print));
    for (print = 0; // 降序打印字母
	 print < length;
	 print++)
      printf("%c",(char)((int)output + length - 1 - print));
    printf("\n");
  }
  return EXIT_SUCCESS;
}
