#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  const float single=17850,landlord=23900,couple=29750,divorce=14875,tier1=0.15,tier2=0.28;
  int print=0,ch=0;
  float limit=0.,wage=0.,tax=0.;
  while (1)
    {
      for (print=0;
	   print<80;
	   print++)
        putchar('*');
      printf("\n");
      printf("1) single\n");
      printf("2) landlord\n");
      printf("3) couple\n");
      printf("4) divorce\n");
      printf("Type in other keys to quit\n");
      for (print=0;
	   print<80;
	   print++)
        putchar('*');
      printf("\n");
      scanf("%d",&ch);
      if (ch!=1&&ch!=2&&ch!=3&&ch!=4)
	{
	  printf("quit.\n");
	  break;
	}
      switch (ch)
	{
	case 1:
	  limit=single;
	  break;
	case 2:
	  limit=landlord;
	  break;
	case 3:
	  limit=couple;
	  break;
	case 4:
	  limit=divorce;
	  break;
	}
      printf("Type in your wage: ");
      scanf("%f",&wage);
      if (wage>limit)
	tax=limit*tier1+(wage-limit)*tier2;
      else
	tax=wage*tier1;
      printf("Tax: %f\n", tax);
    }
  return EXIT_SUCCESS;
}
