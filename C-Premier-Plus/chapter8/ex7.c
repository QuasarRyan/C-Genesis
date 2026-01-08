#include <stdio.h>
#include <stdlib.h>
#define tier1 0.15
#define tier2 0.2
#define tier3 0.25
int main (void)
{
    // const float tier1=0.15,tier2=0.2,tier3=0.25;
    int hours=0;
    float wage=0.,tax=0.,rate1=1.,rate2=1.5;
    int print;
    char ch='\0';
    while (ch!='q')
        {
            rate1=1.;
            rate2=1.5;
            for (print=0;
                print<80;
                print++)
                putchar('*');
            printf("\n");
            printf("a) $8.75/hour");
            for (print=0;
                print<27;
                print++)
                putchar(' ');
            printf("b) $9.33/hour");
            printf("\n");
            printf("c) $10.00/hour");
            for (print=0;
                print<26;
                print++)
                putchar(' ');
            printf("d) $11.20/hour");
            printf("\n");
            printf("q) quit\n");
            for (print=0;
                print<80;
                print++)
                putchar('*');
            printf("\n>");
            ch=getchar();
	    while (getchar()!='\n')
	        continue;
            if (ch!='a'&&ch!='b'&&ch!='c'&&ch!='d')
	        {
		    if (ch!='q')
		        {
		            printf("It's not an option.\n");
                            continue;
			}
		    else
		        break;
	        }
            switch (ch) {
            case 'a':
            rate1=8.75;
            rate2=8.75*1.5;
            case 'b':
            rate1=9.33;
            rate2=9.33*1.5;
            case 'c':
            rate1=10.00;
            rate2=10.00*1.5;
            case 'd':
            rate1=11.20;
            rate2=11.20*1.5;
            }
            printf("work hours:");
            scanf("%d",&hours);
	    while (getchar()!='\n')
	        continue;
            if (hours<=30)
                wage=hours*rate1;
            else
                wage=40*rate1+(hours-40)*rate2;
            if (wage<=300.)
                tax=wage*tier1;
            else if (300.<wage&&wage<=450)
                tax=300.*tier1+(wage-300.)*tier2;
            else if (wage>450)
                tax=300.*tier1+150*tier2+(wage-450)*tier3;
            printf("Income: %.2f Tax: %.2f Net income: %.2f\n",wage,tax,wage-tax);
        }
    return EXIT_SUCCESS;
}
