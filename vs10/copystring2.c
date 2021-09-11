#include<stdio.h>
void change(char *from, char *to);
int main(void)
{   char *a ="she is a teacher";
    char b[] ="she is a  student";//不能使用*b，会bus error
    printf("string a is %s,string b is %s",a,b);
    change (a,b);
    printf("now string a is %s,string b is %s",a,b);
  return 0;

}
void change(char *from, char *to)
{
      for (;*from !='\0';from++,to++)
         *to = *from;
         *to = '\0';

}