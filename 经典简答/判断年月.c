/******************
 * 输入某年某月某日，判断这一天是这一年的第几天？
 * 如果是闰年且月份大于2，总天数应该加一天
 * **************************************/

#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int day ,month,year,sum;
    bool leap = false;
    printf("please input year ,month,and day:");
    while((scanf("%d%d%d",&year,&month,&day)!=3) || (month >12 ||month <0) ||(day>365 ||day<0) )
    {
        while(getchar()!='\n')
        continue;
         printf("please input valid number for year ,month,and day:");
    }
   
   switch(month)
   {
       case 1: sum=0;break;
       case 2: sum=31;break;
       case 3:sum=59;break;
       case 4: sum=90;break;
       case 5: sum=120;break;
       case 6:sum=151;break;
       case 7: sum=181;break;
       case 8:sum=212;break;
       case 9: sum=243;break;
       case 10:sum=273;break;
       case 11: sum=304;break;
       case 12: sum=334;break;
       default : printf("data error");break;
   }
   sum = sum +day;
   if((year%400==0)||(year%4==0&&year%100!=0))//判断是不是闰年
      leap= true;
      else 
      leap =false;
      if (leap &&month >2)
       sum++;
       printf("it is the %dth day.",sum);
       return 0;

   
}