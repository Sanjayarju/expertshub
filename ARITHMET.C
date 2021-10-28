#include <stdio.h>
#include <conio.h>

void main()
{
   int no1,no2,out1,out2,out3,out4,out5;
   clrscr();
   printf("enter input value:");
   scanf("%d%d",&no1,&no2);
   //printf("enter input 2");
   //scanf("%d",%no2);
   out1=no1+no2;
   out2=no1-no2;
   out3=no1*no2;
   out4=no1/no2;
   out5=no1%no2;
   printf("sum %d",out1);
   printf("diff %d",out2);
   printf("product %d",out3);
   printf("divide %d",out4);
   printf("modulo %d",out5);
   getch();
}
