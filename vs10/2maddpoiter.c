#include<stdio.h>
int max(int,int);
int min(int,int);
int add(int,int);
void process(int,int,int(*fun)());
int main(void)
{
   int a,b;
   printf("enter a and b:");
   scanf("%d%d",&a,&b);
   printf("max=");
   process(a,b,max);
   printf("min=");
   process(a,b,min);
   printf("add=");
   process(a,b,add);
}
int max(int a,int b)
{    int max;
    if (a>b)
      max=a;
      else
      max =b;
      return max;
 }
 int min(int a,int b)
{    int min;
    if (a>b)
      min=b;
      else
      min =a;
      return min;
 }
 int add(int a,int b)
 {
     return a+b;

 }
 void process(int a,int b, int (*fun)())
 {   int s,i,j;
    if (fun == add)
      {
         s=(*fun)(a,b);
         printf("%d\n",s);
      }  
     else if (fun == max)
     {
        i =(*fun)(a,b);
        printf("%d\n",i);
     }
     else 
     {
        j =(*fun)(a,b);
        printf("%d\n",j); 
     }

 }