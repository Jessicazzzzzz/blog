/******************************************************
 * write and test a fibonacci() function that uses a loop 
 * instead if recursion to caculate fibonacci numbers.
 * ***********************************************/

#include <stdio.h>
unsigned long fibonacci(unsigned n);
int main(void)
{
    int n;

    printf("please enter a number:");
    while (scanf("%d", &n) == 1)
    {
        
        printf("the number %d in fabobacci is %lu\n",n,fibonacci(n));
        printf("please enter another number:");
    }
}
unsigned long fibonacci(unsigned n)
{
    int i,a, b, c;
    a = 0;
    b = 1;
    i= 0;

  
    while (i<n)//必须要一个变量来做迭代，如果用递减的话，怎么都会到n==1 ，所以只能用迭代加法
    {
          if(i==0)//因为后面的迭代是每前面两个数字的总和，所以只要剔除前面第一个就可以了
            c= 1;
             
         else
           {c = a + b;
            a = b;
            b = c;

           } 
        
        i++;
    }return c;
}