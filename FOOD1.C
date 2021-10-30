#include <stdio.h>
#include <conio.h>
void main()
{
   int poori,ragul,sanjay,kamali,eatr,eats,eatk;
   clrscr();
   scanf("%d",&poori);
   printf("total num of poori: %d",poori);
   scanf("%d",&ragul);
   printf("ragul eats in percentage %d%\n",ragul);
   eatr=poori*ragul/100;
   printf("number of poori ragul ate: %d",eatr);

   scanf("%d",&sanjay);
   printf("total number of poori: %d%\n",sanjay);
   getch();
}