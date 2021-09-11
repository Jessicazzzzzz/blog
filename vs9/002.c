/*****************************
 * 该程序是打印限制的行数量
 * 从i 到j
 * ************************/

#include<stdio.h>

void chline(char ,int ,int);
int main(void)
{  char ch;
int r,c;

  printf("please enter a character and row and column:");
  while(scanf("%c%d%d",&ch,&r,&c)==3)
  {
      chline(ch,r,c);
      putchar('\n');
      while(getchar()!='\n');
      printf("please enter a character and row and column:");
  }

}
void chline(char ch ,int i,int j)
{
       int c;
       for(c=0;c<i;c++)//从col i开始打印，所以之前的要打空格
       {
         putchar(' ');
       } 
       for(;c<=j;c++)//再接下来需要打印到j的col量才能结束，同时输出ch
       {
           putchar(ch);
       }
}