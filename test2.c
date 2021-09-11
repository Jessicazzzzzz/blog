#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    unsigned char a,b,c;
    int n;
    printf("请输入需要实现的右移数字：");
    scanf("%d",&a);
    printf("请输入需要实现的右移位数：");
    scanf("%d",&n);
    b= a<<(sizeof(char)*8-n);
    c=a>>n;
    c = c|b;
    printf("result is :%c\n");
    system("pause");

}