/***************************************************************
 *该程序测试一个一维数组，放10个学生的成绩，写一个函数，求平均值和最大最小值
 ****************************************************************/
#include<stdio.h>
float avrge(float a[]);
float max_s(float a[]);
float min_s(float a[]);
int main(void)
{
    float score[10];
    float average,max,min;
    printf("please enter the scores :");
    for (int i =0;i<10;i++)
    {
        scanf("%f",&score[i]);
    }
     average=avrge(score);
     min= min_s(score);
     max=max_s(score);
     printf("the average of the scores=%.2f,the max score =%.2f,min score=%.2f",
     average,max,min);

     return 0;

}
float avrge(float a[])
{     float sum=0;
int i;
    for( i=0;i<10;i++)
    {
        sum +=a[i];
    }
    return sum/i;
}
float max_s(float a[])
{    int i;
    float max=a[0];
 for (i=0;i<10;i++)
 {
     if(max<a[i])
     {
         max= a[i];
     }
 }
  return max;
}
float min_s(float a[])
{    int i;
    float min=a[0];
 for (i=0;i<10;i++)
 {
     if(min>a[i])
     {
         min = a[i];
     }
 }
  return min;
}