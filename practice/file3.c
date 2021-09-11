/****************************************************************
 * 该程序实现模块化，并用extern 将file1,file2,file3,file4一起compiler，*
 * 实现输入，打印删除一个字符串中指定的字符******************************
 * *******************************/

#include<stdio.h>
int main(void)
{
    extern void enter_string(char str[80]);
  
    extern void print_string(char str[]);
     extern void de_string(char str[],char ch);
     char str[80];
     char ch;
     enter_string(str);
     printf("please enter a character ,i will deleteit from the string");
     scanf("%c",&ch);
     de_string(str,ch);
     print_string(str);
}