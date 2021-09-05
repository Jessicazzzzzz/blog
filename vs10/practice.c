#include<stdio.h>
void copy_arr(double t[],double s[],int n);
void copy_ptr(double *p,double *q,int n);
void copy_ptrs(double *p,double *start,double *end);
int main(void)
{
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    printf("the target1:");
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
copy_ptrs(target3,source,source+5);

}
void copy_arr(double t[],double s[],int n)
{
    for (int i=0;i<n;i++)
    {
        t[i]=s[i];
        printf("%.1lf",t[i]);
    }

}