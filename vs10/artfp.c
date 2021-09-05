#include<stdio.h>
#define SIZE 5
void show_array(const double *p,int n);
void mult_array(double *p,double mult);
int main(void)
{
   double dip[SIZE]={20.0,17.66,8.2,15.3,22.22};
   double *p =dip;
   printf("the original dip array :\n");
   show_array(p,SIZE);
   mult_array(p,2.5);
   printf("the dip array after calling mult_array():\n");
   show_array(p,SIZE);
   return 0;
}
void show_array(const double *p,int n)
{
    int i;
    for (i=0;i<SIZE;i++)
    printf("%8.2lf",*(p+i));
    printf("\n");
}
void mult_array(double *p,double mult)
{
    int i;
    for (i=0;i<SIZE;i++)
    {
        *(p+i) *=mult;
    }
}