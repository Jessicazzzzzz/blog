/******************************************************
 *
 * 有1，2，3，4 个数字，能组成多少个互不相同的且无重复的三位数？*
 * 都是多少？                                            *
 * **************************************************/
 #include<stdio.h>
int main(void)
{   int i,j,k;
   
     for(i=1;i<=4;i++)
     {  for (j=1;j<=4;j++)
        
          {for (k=1;k<=4;k++)
            if(i!=j && j!=k &&i!=k)
             printf("%d%d%d\n",i,j,k);
             
          }
          


     }                                                                                                  



}