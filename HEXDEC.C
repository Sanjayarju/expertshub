#include<stdio.h>
#include<conio.h>
void main()
{
   int val1,val2;
   scanf("%x",&val1);
   printf("%d\n",val1);
   getch();
   scanf("%d",&val2);
   printf("%x\n",val2);//x=hexa decimal if we give double digit it gives
   getch();//hexa decimal value but if we give single digit it also gives
	   //single digit...1 to 9 is number if we give 10 it give "A"..
	   //A to F it goes then we give 16 it gives 10 and so on........
}


