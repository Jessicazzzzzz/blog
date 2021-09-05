#include<stdio.h>
#define SIZE 4
void sum_array(int *a,int *b,int *c,int n);
//void sum_array(int a[],int b[],int c[],int n);
int main(void)
{
   int a[SIZE]={2,4,5,8};
   int b[SIZE]={1,0,4,6};
   int c[SIZE];
   sum_array(a,b,c,SIZE);
    printf("c[%d] is :",SIZE);
   for (int i=0;i<SIZE;i++)
     printf("%4d",c[i]);
     return 0;
}
#if(0)
void sum_array(int a[],int b[],int c[],int n)
{
   for (int i=0;i<n;i++)
     c[i] = a[i]+b[i] ;


}
#endif
void sum_array(int *a,int *b,int *c,int n)
{
    for (int i=0;i<n;i++)
      *(c+i) = *(a+i) + *(b+i);
}