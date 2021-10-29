#include <stdio.h>
#include <conio.h>

void main()
{
   int idly=100,dosa=50,tea=50,vadai=200;
   int Aidly,Adosa,Atea,Avadai;
   int Midly,Mdosa,Mtea,Mvadai;
   clrscr();
   scanf("%d%d%d%d",&Aidly,&Adosa,&Atea,&Avadai);
   printf("alagu's breakfast\n Aidly is: %d\n Adosa is: %d\n Atea is: %d\n Avadai is: %d\n",Aidly,Adosa,Atea,Avadai);
   idly=idly-Aidly;
   dosa=dosa-Adosa;
   tea=tea-Atea;
   vadai=vadai-Avadai;
   scanf("%d%d%d%d",&Midly,&Mdosa,&Mtea,&Mvadai);
   printf("Minion's breakfast\n Midly is: %d\n Mdosa is: %d\n Mtea is: %d\n Mvadai is: %d\n",Midly,Mdosa,Mtea,Mvadai);
   idly=idly-Midly;
   dosa=dosa-Mdosa;
   tea=tea-Mtea;
   vadai=vadai-Mvadai;
   printf("Total balance\n idly is: %d\n dosa is: %d\n tea is: %d\n vadai is: %d\n",idly,dosa,tea,vadai);
   getch();
}