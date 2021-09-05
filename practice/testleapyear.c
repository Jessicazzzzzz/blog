/****************************
 *输入一个年份，并判断是否为闰年*
***************************/
//普通闰年需要即被四，但是不被100 整除，还有就是整百和400整除也是闰年
#include <stdio.h>

int main(void)
{   int year,read,leap;
    puts("enter a year to test it is a leap year or not: ");
    puts("(q to quit)");
    read = scanf("%d",&year);
    while  ( read ==1 )
    {if((year%400==0) || (year%4==0 &&year%100 !=0))
         leap =1;
         else 
         leap =0;
    /*
     {if(year%4 == 0 )
        {  if (year % 100 == 0)
              {
                  if (year %400 ==0)
                    leap =1;
                  else 
                    leap =0;
                }
            else 
              leap=1;
        }  
        else 
            leap =0;
          */
         if (leap)
          printf("the %dyear is leap year\n",year);
          else 
          printf("the %dyear is not leap year\n",year);
    
           

       
         
         
        
        
         puts("enter a year: ");
         read = scanf("%d",&year);
     }
      puts("bye");
      
     return 0;

}
