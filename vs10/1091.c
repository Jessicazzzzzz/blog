#include<stdio.h>
#define ROW 3
#define COL 5

void  copy(int rows,int cols,int ar[rows][cols],int br[rows][cols]);

int main(void)
{
    int array[ROW][COL]={
                           {1,2,3,4,5 },
                           {6,7,8,9,10},
                           {11,13,14,15,16}
                           };
    int  brray[ROW][COL];
      
    printf("the brray is :\n");
    copy(ROW,COL,array,brray);
  
    #if(0) 
     for (int i=0;i<ROW;i++)
      for (int j=0;j<COL;j++)
        printf("%4d",brray[i][j]);
    #endif
      return 0;


}
void  copy(int rows,int cols,int ar[rows][cols],int br[rows][cols])
{   int i,j;
    for (i=0;i<rows;i++)
     {for(j=0;j<cols;j++)
       br[i][j] =ar[i][j];
    }
    for (i=0;i<rows;i++)
     {for (j=0;j<cols;j++)
       printf("%4d",br[i][j]);
       printf("\n");
        } 
}

