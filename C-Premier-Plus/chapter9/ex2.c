#include <stdio.h>
#include <stdlib.h>

void chline (char ch,int i,int j);

int main (void)
{
  char ch='\0';
  int i=0,j=0;
  printf("character\nch=");
  scanf("%c",&ch);
  while (getchar()!='\n') continue;
  printf("column\ni=");
  scanf("%d",&i);
  while (getchar()!='\n') continue;
  printf("line\nj=");
  scanf("%d",&j);
  while (getchar()!='\n') continue;
  chline(ch,i,j);
  return EXIT_SUCCESS;
}

void chline (char ch,int i,int j)
{
  int l=i;
  while (j > 0)
    {
      i=l;
      while (i > 0)
	{
	  putchar(ch);
	  i--;
	}
      putchar('\n');
      j--;
    }
}
