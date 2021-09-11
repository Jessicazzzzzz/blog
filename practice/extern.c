/************************
 * 该程序是显示extern 的作用
 * ***********************/
#include<stdio.h>
int max(int,int);
int main(void)
{
    extern int a,b;//外部变量也是全局变量，作用于整个文件
    printf("the max of a and b is%d",max(a,b));
}
int max(int a,int b)
{  int result;
   result = a>b?a:b;
   return result;

}
int a=3,b=4;