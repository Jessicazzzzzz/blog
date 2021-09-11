/*************************************************
 * write and test a function called larger_of() 
 * that replaces the contents of two double variables 
 * with tne maximum of the two values.for example ,
 * larger_of(x,y)would reset both x,y to the larger 
 * of the two.
 * *************************************************/
#include<stdio.h>

double larger_of(double ,double);
int main(void)
{
    double num1,num2,max;
    printf("please enter two number:");
    while(scanf("%lf%lf",&num1,&num2)==2)
    {
        max=larger_of(num1,num2);
        printf("the larger of %.2lf and %.2lf is %.2lf\n",num1,num2,max);
         printf("please enter two number:");


    }
}
double larger_of(double a,double b)
{ if(a>b)
    return a;
    else 
    return b;
    
}