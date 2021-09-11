#include<stdio.h>

int index_max(double *a,int n);
int main(void)
{
    double array[6]={1.1,8.2,3.3,1.4,1.5,1.6};
    printf("the max number of array is %d",index_max(array,6));
    return 0;


}
int index_max(double *a,int n)
{
    int max=0;
    for (int i=1;i<n;i++)
      {
          if (*(a+i)>*(a+max))
            max = i;
        }
        return max;
}