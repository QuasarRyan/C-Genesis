#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int index=0, length = 8;
  int nums[length];
  for (index=0;
       index<8;
       index++)
  {
    printf("Type in integer No.%d: ", index + 1);
    scanf("%d", &nums[index]);
  }
  
  for (index=0;
       index<8;
       index++)
  {
    printf("%d ",nums[7-index]);
  }
  printf("\n");
  return EXIT_SUCCESS;
}
