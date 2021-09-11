#include<stdio.h>

void copy(int *target,int *source,int );

int main(void)
{ 
    int source[7]={1,2,3,9,5,6,7};
    int target[3];
    copy(target,source,3);
    printf("the target array is:");
    for (int i=0;i < 3;i++)
     printf("%2d",target[i]);
    return 0;
}
void copy(int *target,int *source,int i)
{
       for (int a=0,b=2;a<i;a++,b++)
            
               *(target + a) = *(source + b); 
            
}