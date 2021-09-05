#include<stdio.h>
void inplace_swap(int *x,int *y);
int main(void)
{   int a,b;
    puts("please enter two integers:");
    while(scanf("%d%d",&a,&b)==2)
     {
         inplace_swap(&a,&b);
         printf("after swping the nubmers are:%d,%d",a,b);
     }
}
void inplace_swap(int *x,int *y)
{
    *y = *x^*y;
    *x = *x^*y;
    *y = *x^*y;
}
