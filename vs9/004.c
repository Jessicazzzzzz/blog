/******************************************************
 * the harmonic mean of two numbers is obtained by taking
 * the inversers of the two numbers ,averaging them ,and taking the inverse
 * of the result.write a function that takes two double arguments and returns 
 * the harmonic mean of the two numbers.
 * ******************************************************/


#include<stdio.h>
double harmonic(double,double);
int main(void)
{
    double num1,num2,result;
    printf("please enter two numbers:");
    while(scanf("%lf%lf",&num1,&num2)==2)
    {
        result=harmonic(num1,num2);
        printf("the harmonic of the %.2lf and %.2lf is %.2lf\n",num1,num2,result);
        printf("please enter two numbers:");
    }
    return 0;
}
double harmonic(double a,double b)
{
     double average;
     average= (1/a +1/b)/2;
     return average;
}