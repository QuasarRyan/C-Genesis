/* 修改addemup.c，使其可以与用户交互 */
#include <stdio.h>
#include <stdlib.h>
int main (void) {
  unsigned long sum;
  int days=0, count=0;
  count = 0;
  sum = 0;
  printf("Earn 1$ in day 1, 2$ in day2 and so on.\n");
  printf("How many days have you spent on it? _____\b\b\b\b");
  scanf("%d", &days);
  while (count++ < days)
    sum = sum + count;
  printf("You've earned %lu$\n", sum);
  return EXIT_SUCCESS;
}
