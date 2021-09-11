//二级指针字符串
#include<stdio.h>
#include <string.h>
void change(char **str);
char str1[20] ="notepad";
char str2[20] ="calc";
int main()
{
    char *p =str1;
    printf("p in main:p= %p,str1=%p\n",p,str1);  //p in main: 00403008,00403008
    change(&p);  //change把p的指向给改变，等价于p=str2
    printf("after change: p=%s,p=%p\n",p,p);  //after change: calc,0040301c
}
void change(char **str)
{       //函数有副本机制，会新建一个二级指针变量str来存储main函数中p传过来str1的首地址
    printf("str in change:*str=%p str= %p,str2=%p \n",*str,str,str2); //str in change: 00403008,0040301C
      //char *p=str2;
      //str=&p;这个只是改变了str的指向，但是*str 还是没改变的
    *str =str2;  // *str就相当于一级指针 char * 用来改变main中p指针变量自己的首地址  *str=p=str2
    printf("change:str=%s,str=%p\n",*str,*str); //change:calc,0040301c
}
