#include <stdio.h>
#include <stdlib.h>

void chprint (char ch, unsigned int nums, unsigned int rows);

int main (void)
{
  char ch='\0';
  unsigned int nums=0,rows=0;
  while ((nums < rows)||(rows<1))
    {
      printf("ch=");
      scanf("%c",&ch);
      while (getchar()!='\n') continue;
      printf("nums=");
      scanf("%u",&nums);
      while (getchar()!='\n') continue;
      printf("rows=");
      scanf("%u",&rows);
      while (getchar()!='\n') continue;
    }
  chprint(ch,nums,rows);
  return EXIT_SUCCESS;
}

void chprint (char ch, unsigned int nums, unsigned int rows)
{
  unsigned int cols=nums/rows;
  while (nums>0)
    {
      if (!(nums%cols)&&rows>0)
	{
	  putchar('\n');
	  rows--;
	}
      putchar(ch);
      nums--;
    }
  putchar('\n');
}
