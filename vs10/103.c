#include<stdio.h>
int max(int a[],int n);
int main(void)
{
    int array[6]={2,3,4,23,198,9};
    max(array,6);
   printf("the max number of array is %d",max(array,6));
   return 0;
}
//数组的实现
int max(int a[],int n)
{
   int i,max=a[0];
   for (i=0;i<n;i++)
    {
        if (max<a[i])
         max=a[i];
    }
     return max;
   

}
#if(0)
//指针的实现

int largest(int *p ,int n)
{
    int i,max;
    max=*p;
    for(i=0;i<n-1;i++)
    {
        if(max<*(p+1))
          max= *(p+1);
          p++;
   
    }
 return max;
}
#endif