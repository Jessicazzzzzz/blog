#include <stdio.h>
int main(void)
{
    int a[3][4]={  {1,2,3,4},
                    {4,5,6,7},
                    {8,9,10,28},
                    
                 };
    int (*p)[4];
    int i,j;
    p = a;
    printf("please enter row and column:");
    while (scanf("%d%d",&i,&j)==2 )
    {
        if (i>3 || i<0 ||j>4 ||j<0)
         {printf("please enter valid number");
         printf("(i range from 0~3, j from 0~4):");
         }
         else
        {printf("the array number is %d\n", *(*(p+i)+j));
         printf("please enter row and column:\n");
         }


    }            
     return 0;
   


}