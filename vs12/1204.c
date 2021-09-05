#include<stdio.h>
int count=0;
void loop(int i);
int main(void)
{
    int n;
    printf("please enter a number:");
    while(scanf("%d",&n)==1 &&n >0)
    {
          count++;
          for(int i=n;i>=0;i--)
          loop(i);
         printf("please enter a number:"); 
    }
    printf("loop excuted %d times.",count);
}
void loop(int n)
{
    static int total =0;
    if (n<=0)
    {
        printf("loop cycle:%d\n",count);
        printf("the total:%d\n",total);
    }
    else
   total += n;
  
}