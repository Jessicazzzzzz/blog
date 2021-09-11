#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "diceroll.h"
int main(void)
{   int set,sides,dice,status,roll;
    srand((unsigned int )time(0));
    printf("enter the number of sets;enter q to stop:");
    while(scanf("%d",&set)==1&&set>0)
    {
        printf("how many sides and how many dice?");
         while  ((status=scanf("%d%d",&sides,&dice))!=2 || sides<2||dice<1)
         {
             if(status==EOF)
               break;
               else
               {    if(sides<2)
                     printf("need at least 2 sides");
                     else if (dice<1)
                     printf("need at least 1 die");
                     else
                     printf("you should have entered integers:");
                   while(getchar()!='\n')
                     continue;
                   printf("how many sides and how many dice?");
                     continue;
               }
         }
         
         printf("here are %d sets of %d %dsided throw.",set,dice,sides);
         for(int i=0;i<set;i++)
         {
             roll=roll_n_dice(dice,sides);
             printf("%4d",roll);
         }

         printf("how many set?enter q to stop");
         
    }

}