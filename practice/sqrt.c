/******************************************************************
 * 该程序是求在10万以内的整数，加100后是一个完全平方数，再加168又是一个完全平方数
 * x+100 = n^2,x+100+168 = m^2
 * m^2 -n^2=168=(m+n)(m-n)
 * m+n = i;m-n = j; i*j=168 ,i j 至少一个是偶数
 * m = (i+j)/2 n =(i-j)/2 ,i和j 要么都是偶数要么都是odds
 *所以i和j 都是大于等于2的偶数
 * 由于i*j = 168，j >=2,so 1<i<168/2 +1
 * 循环i的所有数字 
 * ******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXSIZE 100000
#if(1)
int main(void)

{
     int i,j,m,n,x;
    for (i = 1;i  <168/2+1 ;i++)
      {
         if (168%i==0)
         {
             j= 168/i;
             if(i>j && (i+j)%2==0 && (i-j)%2 ==0)
             {
                 m =(i+j)/2;
                 n =(i-j)/2;
                 x = n*n -100;
                 printf("%d +100 =%d *%d\n",x,n,n);
                 printf("%d +100 =%d *%d\n",x,m,m);
             }
         }
           
      }
      return 0;
}
#endif
#if(0)
int main(void)
{
      long int x,y,i;
     for (i=0;i<=MAXSIZE;i++)
     {    x =  sqrt(i+100);
          y = sqrt (i+268);
           if ((x*x == i+100 )&& (y*y == i+268))
              printf("%ld\n",i);
      }


}
#endif