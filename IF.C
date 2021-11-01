#include<stdio.h>
#include<conio.h>
int ragul=1;
void main()
{       while(ragul)
	{
	yogesh:
	clrscr();


	  printf("enter ragul's status:\n");
	  scanf("%d\n",&ragul);
	  //condition checking
	  if(ragul==0)
	  {
		 printf(".......ragul is sitting.......\n");
		 //ragul=1;
		 getch();
		 //continue;
		 goto yogesh;

	  }
	  else if(ragul==1)
	  {
		 printf(".......ragul is standing.......\n");
		 //break;
	  }
	  else
	  {
		 printf(".......invalid input......\n");
	  }

  getch();
  }
}


