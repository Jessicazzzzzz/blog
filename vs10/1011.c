#include<stdio.h>
#define ROW 3
#define COL 5

void print(int (*a)[COL],int row);
void double_times(int a[][COL],int row ,int n);

int main(void)
{
    int array[ROW][COL]={
                          {1,2,3,4,5},
                          {6,7,8,9,10},
                          {11,23,24,25,65}
    };
  
    print(array,ROW);
    double_times(array,ROW,2);
    print(array,ROW);
}
void print(int (*a)[COL],int row)
{
   int i,j;
   for (i=0;i<row;i++)
    {for (j=0;j<COL;j++)
      printf("%4d",a[i][j]);
    putchar('\n');
    }
}
void double_times(int a[][COL],  int row ,int n)
{
     int i,j;
   
     for(i=0;i<row;i++)
      {for (j=0;j<COL;j++)
          a[i][j] *=n;

         // printf("%4d",a[i][j]);如果数组直接打在这就是错的，为什么呢？
       }
       for (i=0;i<row;i++)
    {for (j=0;j<COL;j++)
      printf("%4d",a[i][j]);
    putchar('\n');
    }
}