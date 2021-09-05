#include<stdio.h>
void copy_arry(double *ar,double *br,int n);
void copy_ptry(double *a,double *b,double *c);
int main(void)
{
   double source[5] ={1.1,2.2,3.3,4.4,5.5};
   double target2[5];
   double target3[5];
   
   int i;
   copy_arry(target2,source,5);
   copy_ptry(target3,source,source+5);
 
   for (i=0;i<5;i++)
   printf(" %.1lf",target2[i]);
   printf("\n");
   for (i=0;i<5;i++)
   printf(" %.1lf",target3[i]);
   
   
}
void copy_arry(double *a,double *b,int n)
{
      int i;
      for (i=0;i<n;i++)
         *(a+i) = *(b+i);
      
}
void copy_ptry(double *a,double *start,double *end)
{        for (double*d=start;d<end;d++,a++)
                *a = *d;

}