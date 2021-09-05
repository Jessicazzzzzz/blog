#include<stdio.h>
void copy_arry(double ar[],double br[],int n);
int main(void)
{
   double source[5] ={1.1,2.2,3.3,4.4,5.5};
   double target1[5];
   int i;
   copy_arry(target1,source,5);
   printf("the target1:");
   for (i=0;i<5;i++)
   printf(" %.1lf",target1[i]);

}
void copy_arry(double ar[],double br[],int n)
{
      int i;
      for (i=0;i<n;i++)
       ar[i] = br[i];
      
}