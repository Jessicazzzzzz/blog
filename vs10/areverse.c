#include<stdio.h>
void reverse(int array[],int n);
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
     

    return 0;

}
void reverse(int array[],int n)
{    int temp,i,j,m;
     m= (n-1)/2;
     for (i=0;i<=m;i++)
     {
         j=n-1-i;
         temp = array[i];
         array[i] = array [j];
         array[j] = temp;
        
     }
     for (i=0;i<n;i++)
       printf("%d",array[i]);  
   

}