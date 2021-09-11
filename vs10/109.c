#include<stdio.h>
#define ROW 3
#define COL 5

void  copy(int rows,int cols,int ar[rows][cols],int br[rows][cols]);
void  print(int rows,int cols,int arr[rows][cols]);
int main(void)
{
    int array[ROW][COL]={
                           {1,2,3,4,5 },
                           {6,7,8,9,10},
                           {11,13,14,15,16}
                           };
    int  brray[ROW][COL];
    
    copy(ROW,COL,array,brray);
    
    printf("the brray is :\n"); 
    print(ROW,COL,brray);
      return 0;


}
void  copy(int rows,int cols,int ar[rows][cols],int br[rows][cols])
{   int i,j;
    for (i=0;i<rows;i++)
     {for(j=0;j<cols;j++)
       br[i][j] =ar[i][j];
      }
}
void  print(int rows,int cols,int arr[rows][cols])
{
    for (int i=0;i<rows;i++)
      {for (int j=0;j<cols;j++)
       printf("%4d",arr[i][j]); 
         putchar('\n');

       } 
}