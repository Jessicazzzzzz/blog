/********************************
 * 该程序计算1到5的！，不用递归，用register,直接放入寄存器，会快很多
 * **************************************/
#include<stdio.h>
int factoric(int a);
int main(void)
{
    int i;
    for (i=1;i<14;i++)
    {
        printf("%d!=%d\n",i,factoric(i));

    }
    return 0;
}
int factoric(int a)
{
    register int  i;
//int  i;

    int result=1;
    for(i=1;i<=a;i++)
    {
          result *=i;
    }
    return result;
}