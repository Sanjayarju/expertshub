#include <stdio.h>
#include <conio.h>
void main()
{
   int poori,ragul,sanjay,naveena,eatr,eats,eatn;
   clrscr();
   printf("total num of poori:");
   scanf("%d",&poori);

   scanf("%d",&ragul);
   printf("ragul eats in percentage %d%\n",ragul);
   eatr=poori*ragul/100;
   printf("number of poori ragul ate: %d\n",eatr);

   scanf("%d",&sanjay);
   printf("sanjay eats in percentage: %d%\n",sanjay);
   eats=poori*sanjay/100;
   printf("number of poori sanjay ate: %d\n",eats);

   poori=poori-eatr-eats;
   printf("number of poori balance: %d\n",poori);

   scanf("%d",&naveena);
   printf("kamali eats in percentage: %d%\n",naveena);
   eatn=poori*naveena/100;
   printf("number of poori naveena ate: %d\n",eatn);

   poori=poori-eatn;
   printf("number of poori balance: %d\n",poori);

   getch();
}




