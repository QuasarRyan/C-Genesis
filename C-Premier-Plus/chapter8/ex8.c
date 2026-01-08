#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
void menu (void);
double add (double a,double b);
double subtract (double a,double b);
double multiply (double a,double b);
double devide (double a,double b);
double get_number (void);
double get_nonzero_number (void);

int main (void)
{
  char ch='\0';
  double a=0.,b=0.;
  menu();
  ch=getchar();
  while (getchar()!='\n') continue;
  while (ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'&&ch!='q')
    {
      printf("That's not an option.\n");
      menu();
      ch=getchar();
      while (getchar()!='\n') continue;
    }
  while (ch!='q')
    {
      switch (ch)
	{
	case 'a':
	  printf("Enter first number: ");
	  a=get_number();
	  printf("Enter second number: ");
	  b=get_number();
	  add(a,b);
	  break;
	case 's':
	  printf("Enter first number: ");
	  a=get_number();
	  printf("Enter second number: ");
	  b=get_number();
	  subtract(a,b);
	  break;
	case 'm':
	  printf("Enter first number: ");
	  a=get_number();
	  printf("Enter second number: ");
	  b=get_number();
	  multiply(a,b);
	  break;
	case 'd':
	  printf("Enter first number: ");
	  a=get_number();
	  printf("Enter second number: ");
	  b=get_nonzero_number();
	  devide(a,b);
	  break;
	}
      menu();
      ch=getchar();
      while (getchar()!='\n') continue;
      while (ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'&&ch!='q')
	{
	  printf("That's not an option.\n");
	  menu();
	  ch=getchar();
	  while (getchar()!='\n') continue;
	}
    }
  printf("Quit\n");
  return EXIT_SUCCESS;
}

void menu (void)
{
  printf("Enter the operation of your choice:\n");
  printf("a. add           s. subtract\n");
  printf("m. multiply      d. divide\n");
  printf("q. quit\n");
}

double add (double a,double b)
{
  printf("%g + %g = %g\n",a,b,a+b);
  return a+b;
}

double subtract (double a,double b)
{
  printf("%g - %g = %g\n",a,b,a-b);
  return a-b;
}

double multiply (double a,double b)
{
  printf("%g x %g = %g\n",a,b,a*b);
  return a*b;
}

double devide (double a,double b)
{
  printf("%g ÷ %g = %g\n",a,b,a/b);
  return a/b;
}

double get_number (void)
{
  double res=0.;
  int check=0;
  check=scanf("%lf",&res);
  while (getchar()!='\n') continue;
  while (check!=1||isnan(res)||isinf(res))
    {
      printf("It's not a valid number!\n");
      printf("Please enter a number: ");
      check=scanf("%lf",&res);
      while (getchar()!='\n') continue;
    }
  return res;
}

double get_nonzero_number (void)
{
  double res=get_number();
  while (res==0.)
    {
      printf("The second number shouldn't be zero.\n");
      printf("Enter second number: ");
      res=get_number();
    }
  return res;
}
