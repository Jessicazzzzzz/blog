#include<stdio.h>
void swap(int *p1,int *p2);
int main (void)
{
   int *p1,*p2;
   int a ,b;
   
   printf("please enter two numbers:");
   scanf("%d%d",&a,&b);
   p1 = &a;
   p2 = &b;
   if (a < b)
   {
       swap(p1,p2);//交换两个的值
       
   }

printf("%d>%d",a,b);

}
void swap(int *p1, int *p2)//位置传给它
{
    printf("i am swaping ,please wait:");
    int p;
    p = *p1; //相当于p =a；
    *p1 = *p2;//p1=p2;
    *p2 = p;//p2=p;

}