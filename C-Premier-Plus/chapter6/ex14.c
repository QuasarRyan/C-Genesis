#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int len=8,index=0,index1=0;
  double nums1[len],nums2[len];
  do
    {
      printf("Type in a double No.%d: ", index + 1);
      scanf("%lf",&nums1[index]);
      nums2[index]=0;
      for (index1=0;
	   index1<index+1;
	   index1++)
	{
	  nums2[index]+=nums1[index1];
	}
    }while(++index<len);
  for (index=0;
       index<len;
       index++)
    {
      printf("%-12lf ",nums1[index]);
    }
  printf("\n");
  for (index=0;
       index<len;
       index++)
    {
      printf("%-12lf ",nums2[index]);
    }
  printf("\n");
  return EXIT_SUCCESS;
}
