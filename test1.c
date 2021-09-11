#include<stdio.h>
int main(void)
{
    char a,b,c ,d;
    printf("enter the nunmber to test:");
    scanf("%d",&a);
     b = a >>2;
     c = ~(~0<<4);
     d = b&c;
     printf("%d",d);
}