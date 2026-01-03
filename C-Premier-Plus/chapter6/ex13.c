#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int len=8,index=0,mul=0;
  int nums[len];
  for (index=0;
       index<len;
       index++)
    {
      nums[index]=1;
      for (mul=1;
	   mul<index+1;
	   mul++)
	{
	  nums[index]*=2;
	}
    }
  index=0;
  do
    {
      printf("%d ",nums[index]);
    }while (++index<len);
  printf("\n");
  return EXIT_SUCCESS;
}
