#include <stdio.h>
#include <stdlib.h>

double power(double,int);

int main (void)
{
  double x,xpow;
  int exp;
  printf("Enter a number and a integer power ");
  printf("to which\nthe number will be raised. Enter q to quit\n");
  while (scanf("%lf%d",&x,&exp)==2)
    {
      xpow=power(x,exp);
      printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
      printf("Enter next pair of numbers or q to quit.\n");
    }
  printf("Hope you enjoy this power trip -- bye!\n");
  return EXIT_SUCCESS;
}

double power(double n,int p)
{
  if (p==0)
    {
      if (n==0)
	{
	  printf("0 when powering to 0 hasn't been defined.\n");
	  printf("Fallback the result to 1\n");
	}
      n=1.;
    }
  else if (n==0)
    n=0.;
  else if (p<0)
    {
      if (p==-1)
	n=1/n;
      else
	n=1/n*power(n,p+1);
    }
  else if (p>1)
    n*=power(n,p-1);
  return n;
}
