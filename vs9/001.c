#include<stdio.h>
double min(double,double);
int main(void)
{   double x,y;
char ch;
    printf("please enter two numbers:");
    while(scanf("%lf%lf",&x,&y)!=2)
    {
             while((ch=getchar())!='\n')
               putchar(ch);
               printf(" not numbers,please try again.\n");
               printf("please enter two valid numbers:");

    }
 
    printf("the min of the two number is %.2lf",min(x,y));
}
double min(double a,double b)
{
 
    if(a>b)
     return b;
     else 
     return a;


}