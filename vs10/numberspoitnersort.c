#include<stdio.h>
 void swape(int *p,int *q);
 void exchange(int *p,int *q,int *m);

int main(void)
{
     int a,b,c;
     int *p1,*p2,*p3;
     p1=&a,p2=&b,p3=&c;
     printf("please enter three numbers:");
     while(scanf("%d%d%d",p1,p2,p3)!=3)
     {    while(getchar()!='\n');
         printf("please enter another valid numbers:");
     }
     exchange(p1,p2,p3);
     printf("after sorted %d>%d>%d",*p1,*p2,*p3);
        printf("after sorted %d>%d>%d",a,b,c);
     return 0;

}
 void exchange(int *p,int *q,int *m)
 {
     if(*p <*q)
       swape(p,q);
       if(*p<*m)
       swape(p,m);
       if (*q<*m)
       swape(q,m);
 }
  void swape(int *p,int *q)//需要通过值来转换
  {
         int a;
         if(*p<*q)
         {
             a=*p;
             *p=*q;
             *q=a;
         }


  }