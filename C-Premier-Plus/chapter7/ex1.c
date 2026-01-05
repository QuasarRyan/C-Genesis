#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  char ch;
  int stats[3]={0,0,0};
  while ((ch=getchar())!='#')
    {
      if (ch!=' '&&ch!='\n')
	stats[2]++;
      switch (ch)
	{
	case ' ': stats[0]++;
	  break;
	case '\n': stats[1]++;
	  break;
	}
    }
  printf("space=%d,enter=%d,others=%d\n",stats[0],stats[1],stats[2]);
  return EXIT_SUCCESS;
}
