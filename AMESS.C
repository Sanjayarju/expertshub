#include <stdio.h>
#include <conio.h>

void main()
{
   int idly=100,dosa=50,tea=50,vadai=200;
   int Aidly,Adosa,Atea,Avadai;
   int Bidly,Bdosa,Btea,Bvadai;
   clrscr();
   scanf("%d%d%d%d",&Aidly,&Adosa,&Atea,&Avadai);
   printf("alagu's breakfast\n Aidly is: %d\n Adosa is: %d\n Atea is: %d\n Avadai is: %d\n",Aidly,Adosa,Atea,Avadai);
   Bidly=idly-Aidly;
   Bdosa=dosa-Adosa;
   Btea=tea-Atea;
   Bvadai=vadai-Avadai;
   printf("Balance\n idly is: %d\n dosa is: %d\n tea is: %d\n vadai is: %d\n ",Bidly,Bdosa,Btea,Bvadai);
   getch();
}