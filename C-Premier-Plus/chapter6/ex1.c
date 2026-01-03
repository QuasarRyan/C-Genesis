#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int a[26],a_i='a',delta=0;
  for (delta=0,a_i='a';
       delta<=25;
       a_i=(char)((int)a_i+1), delta++)
    a[delta]=a_i;
  delta=0;
  while (delta<26)
  {
    printf("a[%d]=%c\n",delta,(char)a[delta]);
    delta++;
  }
  return EXIT_SUCCESS;
}
