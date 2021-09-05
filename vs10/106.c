#include <stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 10
void reverse(double *a,int n);
int main(void)
{
    double test[SIZE];
    srand(time(NULL));
    for(int i=0;i<SIZE;i++)
    test[i]= rand()/(double)RAND_MAX;
    printf("the original array :\n");
    for (int i=0;i<SIZE;i++)
    printf("%10.2lf",test[i]);
    printf("\n");
    reverse(test,SIZE);
    return 0;
}
void reverse(double *a,int n)
{
    int i,m,j;
    double temp;
    m = (n-1)/2;
    for (i=0,j=n-1;i<=m;i++,j--)
      {  temp =*(a+i);
         *(a+i) = *(a+j);
         *(a+j)=temp;
      } 
       printf("after reversing array:\n");
     for (i=0;i<n;i++) 
       printf("%10.2lf",*(a+i)); 

}
