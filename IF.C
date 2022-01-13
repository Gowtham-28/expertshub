#include <stdio.h>
#include <conio.h>
int ragul=1;
void main()
{
while(ragul)
{
karthi:
clrscr();
   printf("ragul's current status \n");
   scanf("%d%",&ragul);
   if(ragul==0)
   {
      printf("ragul is sitting \n");
      //ragul=1;
      getch();
      //continue;
      goto karthi;
   }
   else  if(ragul==1)
   {
   printf("ragul is standing \n");
   //getch();
   //break;
   }
   else
   {
   printf("ragul is sleeping \n");
   }
   getch();
   }
   }