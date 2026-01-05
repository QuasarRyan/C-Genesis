#include <stdio.h>
#include <stdlib.h>
void menu (void);
float cal (float x);
void check_out (float weight_a, float weight_b, float weight_c, float total_weight, float price, float discount, float total_price, float freight);
int main (void)
{
  const float artichoke=2.05,beetroot=1.15,carrot=1.09;
  float weight=0.,weight_a=0.,weight_b=0.,weight_c=0.,total_weight=0.,price=0.,total_price=0.,discount=0.,freight=0.;
  char ch='z';
  menu();
  scanf("%c",&ch);
  while (ch!='q')
    {
      weight=0.;
      switch (ch)
	{
	case 'a':
	  printf("Artichoke(2.05$/pound)\n");
	  printf("Type in the weight(pound):");
	  scanf("%f",&weight);
	  weight_a+=weight;
	  break;
	case 'b':
	  printf("Beetroot(1.15$/pound)\n");
	  printf("Type in the weight(pound):");
	  scanf("%f",&weight);
	  weight_b+=weight;
	  break;
	case 'c':
	  printf("Carrot(1.09$/pound)\n");
	  printf("Type in the weight(pound):");
	  scanf("%f",&weight);
	  weight_c+=weight;
	  break;
	}
      printf("\n\n\n\n");
      menu();
      scanf(" %c",&ch);//skip all the blanks
    }
  total_weight=weight_a+weight_b+weight_c;
  price=weight_a*artichoke+weight_b*beetroot+weight_c*carrot;
  if (price>100)
    discount=price*0.05;
  freight=cal(total_weight);
  total_price=price-discount+freight;
  check_out(weight_a,weight_b,weight_c,total_weight,price,discount,total_price,freight);
  return EXIT_SUCCESS;
}

void menu (void)
{
  int print=0;
  for (print=0;
       print<80;
       print++)
    putchar('*');
  printf("\n");
  printf("\tOptions         Unit Price\n");
  printf("\ta) artichoke:   2.05$/pound\n");
  printf("\tb) beetroot:    1.15$/pound\n");
  printf("\tc) carrot:      1.09$/pound\n");
  printf("Type in \"q\" to check out^_^\n");
  for (print=0;
       print<80;
       print++)
    putchar('*');
  printf("\n");
}

float cal (float x)
{
  const float tier1=6.5,tier2=14.;
  float tier3=14.;
  if (x<=5)
    x=tier1;
  else if (5<x&&x<=20)
    x=tier2;
  else
    {
      int counter=(int)x-19;
      while (counter)
	{
	  tier3+=0.5;
	  counter--;
	}
      x=tier3;
    }
  return x;
}

void check_out (float weight_a, float weight_b, float weight_c, float total_weight, float price, float discount, float total_price, float freight)
{
  const float artichoke=2.05,beetroot=1.15,carrot=1.09;
  int print=0;
  for (print=0;
       print<80;
       print++)
    putchar('-');
  printf("\n");
  printf("\tOptions         Unit Price        Weight(Pounds) Price($)\n");
  printf("\ta) artichoke:   2.05$/pound       %-6.2f         %6.2f$\n",weight_a,weight_a*artichoke);
  printf("\tb) beetroot:    1.15$/pound       %-6.2f         %6.2f$\n",weight_b,weight_b*beetroot);
  printf("\tc) carrot:      1.09$/pound       %-6.2f         %6.2f$\n",weight_c,weight_c*carrot);
  for (print=0;
       print<80;
       print++)
    putchar('-');
  printf("\n");
  printf("\t                                                 %6.2f$\n",price);
  if (discount>0.)
    printf("\t                                     Discount:  -%6.2f$(-5%%)\n",discount);
  for (print=0;
       print<80;
       print++)
    putchar('-');
  printf("\n");
  printf("\t                                                 %6.2f$\n",price-discount);
  printf("\t                                       Freight: +%6.2f$(%.2fpounds)\n",freight,total_weight);
  for (print=0;
       print<80;
       print++)
    putchar('-');
  printf("\n");
  printf("\t                                         Total:  %6.2f$",total_price);
  printf("\n");
}
