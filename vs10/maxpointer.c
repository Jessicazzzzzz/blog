#include<stdio.h>
int max(int a,int b);

int main(void)
{  int a ,b,c;
   int (*p)();
   printf("please enter two integers:");
   scanf("%d%d",&a,&b);
   p = max;
   c = (*p)(a,b);
   printf("a=%d,b=%d,max=%d",a,b,c);
}
int max(int a,int b)
{
   int max;
   if (a>b)
     max=a;
     else 
     max=b;
    return max;

}