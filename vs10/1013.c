#include<stdio.h>
void print(double array[][5],int n);
void average_a(double (*array)[5],int n);
void total_av(double (*array)[5],int n);
void max_a(double (*array)[5],int n);
int main(void)
{   int i,j;
    double a[3][5];
    printf("please enter 15 numbers:");
    for (i=0;i<3;i++)
    for (j=0;j<5;j++)
      scanf("%lf",&a[i][j]);
    print(a,3);
    average_a(a,3);
    total_av(a,3);
    max_a(a,3);
}
void print(double array[][5],int n)
{
    
    for (int i=0;i<n;i++)
    {  for (int j=0;j<5;j++)
        {
        printf("%7.2lf",array[i][j]);
        }printf("\n");

    }
}
#if (1)
void average_a(double (*array)[5],int n)
{
    double average;
    for(int i=0;i<n;i++)
     {  double sum =0;
         for (int j =0;j<5;j++)
       sum += array[i][j]; 
       average = sum/5;
          printf("row %d %5.2lf",i+1,average);
          putchar('\n');
     }
}
#endif
void total_av(double (*array)[5],int n)
{   double average, sum =0;
   for (int i = 0;i<n; i++)
    for (int j = 0; j<5 ; j++)
       sum += array[i][j];
       average =sum/(n*5) ;
       printf("the total average is %5.2lf",average);
       putchar('\n');


}
void max_a(double (*array)[5],int n)
{   double max = array[0][0];
   for (int i=0;i<n;i++)
     {
      for (int j=0;j<5;j++)
         if (max < array[i][j])
            max= array[i][j];
     } 
      printf("the max number of array is %5.2lf",max);

}