/*
  调用one_three()函数，该函数在一行打印单词one，
  再调用two()函数，然后在另一行打印打印单词three。
  two()函数在一行显示单词two。
  main()函数在盗用one_three()函数前要打印短语starting now:
  并在调用完毕之后显示短语done!，因此该程序输出如下：
  starting now:
  one
  two
  three
  done!
*/
#include <stdio.h>
#include <stdlib.h>
void one_three (void);
void two (void);
int main (void) {
  printf("starting now:\n");
  one_three();
  printf("done!\n");
  return EXIT_SUCCESS;
}
void one_three (void) {
  printf("one\n");
  two();
  printf("three\n");
}
void two (void) {
  printf("two\n");
}
