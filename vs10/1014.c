#include<stdio.h>

void print(int r,int c,double array[r][c]);
void average_a(int r,int c,double array[r][c]);
void total_av(int r,int c,double array[r][c]);
void max_a(int r,int c,double array[r][c]);
int main(void)
{   int i,j;
    double a[3][5];
    printf("please enter 15 numbers:");
    for (i=0;i<3;i++)
    for (j=0;j<5;j++)
      scanf("%lf",&a[i][j]);
    print(3,5,a);
    average_a(3,5,a);
    total_av(3,5,a);
    max_a(3,5,a);
}
void print(int r,int c,double array[r][c])
{
    
    for (int i=0;i<r;i++)
    {  for (int j=0;j<c;j++)
        {
        printf("%7.2lf",array[i][j]);
        }printf("\n");

    }
}
#if (1)
void average_a(int r,int c,double array[r][c])
{
    double average;
    for(int i=0;i<r;i++)
     {  double sum =0;
         for (int j =0;j<c;j++)
       sum += array[i][j]; 
       average = sum/5;
          printf("row %d %5.2lf",i+1,average);
          putchar('\n');
     }
}
#endif
void total_av(int r,int c,double array[r][c])
{   double average, sum =0;
   for (int i = 0;i<r; i++)
    for (int j = 0; j<c ; j++)
       sum += array[i][j];
       average =sum/(r*c) ;
       printf("the total average is %5.2lf",average);
       putchar('\n');


}
void max_a(int r,int c,double array[r][c])
{   double max = array[0][0];
   for (int i=0;i<r;i++)
     {
      for (int j=0;j<c;j++)
         if (max < array[i][j])
            max= array[i][j];
     } 
      printf("the max number of array is %5.2lf",max);

}