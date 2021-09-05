/********************************
 * 该程序计算1到5的！，不用递归，用静态局部变量static
 * **************************************/

#include<stdio.h>
  int f(int a); 
 int main(void)
 {
     int i;
     for (i=1;i<=5;i++)
     {
         printf("%d!= %d\n",i,f(i));

     }
     return 0;

 }
 int f(int a)
 {   
     static int  result=1;//每次迭代后，它的数值是上一次的值
       result *=a; 
       return result;//a=1 r=1;a=2;r=2*1;  a=3 r=3*2*1>>>> 

 }
