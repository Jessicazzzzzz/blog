/***********************************
 * 该程序是测试一个数组中最大值*
 * **********************************/





#include <stdio.h>

int main(void)
{
    int array[3][4];
    int row, col, i,j;
    int max1;//max1赋值为数组的第一个数

    puts("enter 12 digitals:");
  
    for (row = 0; row < 3; row++)
    {      
        for (col = 0; col < 4; col++)
        {
            scanf("%d", &array[row][col]);
           
            printf(" %d", array[row][col]);
        }
        printf("\n");
    }
     max1 = array[0][0];
   for (row = 0;row<3;row++)
   {
       for(col =0;col<3;col++)
       {
          if(array[row][col]>max1)
          {  
             max1 = array[row][col];
              i= row;
              j = col;
          }

        
              
       }
     
      printf("the max number is %d ,and it is in %drow%dcolumn\n",max1,i,j);
   }
 
 printf("the max number is %d ,and it is in %drow%dcolumn",max1,i,j);

}
