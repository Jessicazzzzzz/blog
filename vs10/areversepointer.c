#include<stdio.h>
void reverse(int *a,int n);
int main(void)
{
    int array[10];
    int i;
    int *p=array;
    
   
    printf("the original array:");
    for (i=0;i<10;i++)
    scanf("%d",&array[i]);
    printf("the array now are:");
    reverse (p,10);
    for (i=0;i<10;i++)
     printf("%d",array[i]);

    return 0;

}
void reverse(int *a,int n)
{   int *p,temp,*i,*j,m;
     m =(n-1)/2;
     i = a ;
     j = a -1 +n;
     p = a +m;
     for (;i<=p;i++,j--)
     {   temp = *i;
         *i = *j ;
         *j = temp;

     }




}
