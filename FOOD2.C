#include<stdio.h>
#include<conio.h>
void main()
{
   int tpoori,tpoori2,ragul,sanjay,kamali;
   int reat,seat,keat;
   clrscr();
   printf("Total Poori are:\n");
   scanf("%d",&tpoori);
   printf("\nenter ragul's poori percentage:\n");
   scanf("%d",&ragul);
   printf("\nenter sanjay's poori percentage:\n");
   scanf("%d",&sanjay);
   reat=tpoori* ragul/100;
   seat=tpoori* sanjay/100;
   tpoori2=tpoori-reat-seat;
   printf("ragul's poori:%d\n",reat);
   printf("sanjay's poori:%d\n",seat);
   printf("balanced poori after ragul and sanjay ate:%d\n",tpoori2);
   printf("\nenter kamali's poori percentage:\n");
   scanf("%d",&kamali);
   keat=tpoori* kamali/100;
   tpoori=tpoori-keat;
   printf("kamali's poori:%d\n",keat);
   printf("totalbalance after three members ate: %d\n",tpoori);
   getch();
   }