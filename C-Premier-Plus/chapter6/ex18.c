#include <stdio.h>
#include <stdlib.h>
const int dunbar=150;
int main (void)
{
  int rabnud=5,week=1;
  while (rabnud<dunbar)
    {
      rabnud-=1;
      rabnud+=week;
      printf("Week%d: %dfriends\n",week,rabnud);
      week++;
    }
  return EXIT_SUCCESS;
}
