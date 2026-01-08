#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int guess_straight (int current_guess);
int guess_range (int current_guess);
int judge (char ch);
char get_input (void);
int check(char ch);

int main (void)
{
  printf("Guess number:");
  printf("Pick an integer from 1 to 100, ");
  printf("and I'll try guessing it. ");
  printf("Type in \"y\" as \"yes\" ");
  printf("and \"n\" as \"no\".\n");
  int res=50,min=0,max=100;
  while (!guess_straight(res))
    {
      if (guess_range(res))
	min=res;
      else
	max=res;
      res=(min+max)/2;
    }
  printf("I knew I could do it.\n");
  return EXIT_SUCCESS;
}

int guess_straight(int current_guess)
{
  int res=0;
  printf("Is your number %d?",current_guess);
  if (judge(get_input()))
    res=1;
  return res;
}

int guess_range(int current_guess)
{
  int res=0;
  printf("Is your number bigger than %d",current_guess);
  if (judge(get_input()))
    res=1;
  return res;
}

int judge (char ch)
{
  int res=0;
  if (ch=='y'||ch=='Y')
    res=1;
  return res;
}

char get_input(void)
{
  char ch;
  do
    {
      ch=getchar();
      while (getchar()!='\n')
	continue;
    } while (!check(ch));
  return ch;
}

int check(char ch)
{
  int res=0;
  if (ch=='y'||ch=='n'||ch=='Y'||ch=='N')
    res = 1;
  if (!res)
    printf("I don't know what you mean.\n");
  return res;
}
