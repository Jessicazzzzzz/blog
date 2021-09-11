#include<stdio.h>
int max,min;
void max_min_value(int array[],int n);
int main(void)
{   int a[10];
    int i ;
    printf("please enter 10 numbers :");
    for (i=0;i<10;i++)
    scanf("%d",&a[i]);
    max_min_value(a,10);
    printf("max :%d,min :%d",max,min);
    return 0;
}
void max_min_value(int array[],int n)
{    int *p,*array_end;
     array_end = array +n;
     max=min = *array;
    for (p = array+1;p<array_end;p++)
      {
          if (*p>max)
            max=*p;
            else if (*p <min)
            min=*p;
      }



}