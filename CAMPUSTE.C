#include<stdio.h>
#include<conio.h>
void main()
{
 int m,diff;
 int a=11101;
 int b=7980;
 int c=9999;
 int d=2195;
 int e=9800;
 int f=9999;
 clrscr();
 printf("Number of the Employees:");
 scanf("%d",&m);
 printf("\n");
/* printf("Sandwich Toaster: 2195\n");
 printf("Cult Pass: 2799\n");
 printf("scale: 4999\n");
 printf("fitbat Plus: 7980\n");
 printf("Microwave Oven: 9800\n");
 printf("Alexa: 9999\n");
 printf("Digital Camera: 11101\n");
 printf("Ipods: 22349\n");
 printf("MI Band: 999\n");
 printf("Macbook Pro: 229900\n");*/
 printf("Here the goodies that are selected for distribution are:\n");
     if(m==4)
     {
  printf("fitbat Plus: 7980\n");
 printf("Microwave Oven: 9800\n");
 printf("Alexa: 9999\n");
 printf("Digital Camera: 11101\n");
 printf("\n");
 printf("And the difference between the choosen goodie with highest price and the lowest price is:");
 diff=a-b;
 printf("%d",&diff);
 }
 else if(m==6)
 {
 printf("Sandwich Toaster: 2195\n");
 printf("Cult Pass: 2799\n");
 printf("scale: 4999\n");
 printf("fitbat Plus: 7980\n");
 printf("Microwave Oven: 9800\n");
 printf("Alexa: 9999\n");
 printf("And the difference between the choosen goodie with highest price and the lowest price is:");
 diff=c-d;
 printf("%d",&diff);
 }
 else if(m==2)
 {
 printf("Microwave Oven: 9800\n");
 printf("Alexa: 9999\n");
  printf("And the difference between the choosen goodie with highest price and the lowest price is:");

 diff=e-f;
 printf("%d",&diff);
 }
getch();
 }

