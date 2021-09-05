#include<stdio.h>
void swap(int *p1, int *p2);
int main(void)
{
   int a ,b ,c;
   int *p1, *p2,*p3;
   printf("please enter three integers :");
   scanf("%d%d%d",&a,&b,&c);
   p1 = &a;
   p2 = &b;
   p3 = &c;
   if (a<b)
   swap(p1,p2);
   if (b<c)
   {
       swap(p2,p3);
       if (a<b)
       swap (p1,p2);
   }

printf(" %d >%d >%d",*p1,*p2,*p3);
return 0;


}

void swap(int *p1, int *p2)
{   int p;
  p = *p1;
  *p1 = *p2;
  *p2 = p;
   

}