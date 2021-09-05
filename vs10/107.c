#include<stdio.h>
#define COLS 4
#define ROWS 2
void copy(double (*a)[COLS] ,double (*b)[COLS],int n);

int main(void)
{   double array[ROWS][COLS]={  {1.1,1.2,1.3,1.4},
                                 {2.1,2.2,2.3,2.4}
                                 };
    double brray[ROWS][COLS];
    copy(brray,array,2);
    return 0;
}
void copy(double (*a)[COLS] ,double (*b)[COLS],int n)
{
      int row,col;
      for (row = 0;row < n;row++)
        for (col = 0; col <COLS; col++)
          {
              *(*(a+row)+col) = *(*(b+row)+col) ;
              printf("%5.2lf",*(*(a+row)+col));
          } 



}