#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  printf("This Program computes moduli.\n");
  printf("Enter an integer for the second operand: ");
  int num2=0;
  scanf("%d", &num2);
  int num1=0;
  printf("Now enter the first operand: ");
  scanf("%d", &num1);
  while (num1 > 0)
  {
    printf("%d %% %d is %d\n", num1, num2, num1 % num2);
    printf("Enter next number for first operand (<= 0 to quit): ");
    scanf("%d", &num1);
  }  
  return EXIT_SUCCESS;
}
