#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosai=50,tea=50,vadai=200;
   int aidly,adosai,atea,avadai;
   int bidly,bdosai,btea,bvadai,bidly2;
   int midly,mdosai,mtea,mvadai;
   clrscr();
   printf("\n\n alagu's idly:");
   scanf("%d",&aidly);
   printf("\n\n alagu's dosai:");
   scanf("%d",&adosai);
   printf("\n\n alagu's tea:");
   scanf("%d",&atea);
   printf("\n\n alagu's vadai:");
   scanf("%d",&avadai);
   printf("\n\n monii's idly:");
   scanf("%d",&midly);
   printf("\n\n monii's dosai:");
   scanf("%d",&mdosai);
   printf("\n\n monii's tea:");
   scanf("%d",&mtea);
   printf("\n\n monii's vadai:");
   scanf("%d",&mvadai);
    /*idly=idly-aidly-midly;
   dosai=dosai-adosai-mdosai;
   tea=tea-atea-mtea;
   vadai=vadai-avadai-mvadai;
   printf("\n\nbalanced idly: %d",idly);
   printf("\n\nbalanced dosai: %d",dosai);
   printf("\n\nbalance tea: %d",tea);
   printf("\n\nbalanced vadai: %d",vadai);*/
   bidly=idly-aidly;
   bidly2=bidly-midly;
   if(midly>idly || aidly>idly){
   printf("\n\nbalanced idlys are 0 \n");
   }
   else{
   printf("balanced idlys are:%d\n",bidly2);
   }
   bdosai=dosai-adosai-mdosai;
   if(adosai>dosai || mdosai>dosai){
   printf("balanced dosas are 0 \n");
   }
   else{
   printf("balanced dosas are:%d\n",bdosai);
   }
   btea=tea-atea-mtea;
   if(atea>tea || mtea>tea){
   printf("balanced tea are 0 \n");
   }
   else{
   printf("balanced tea are:%d\n",btea);
   }
   bvadai=vadai-avadai-mvadai;
   if(avadai>vadai || mvadai>vadai){
   printf("balanced vadais are 0 \n");
   }
   else{
   printf("balanced vadais are:%d\n",bvadai);
   }
   getch();
   }
