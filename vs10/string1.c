#include<stdio.h>
int main(void)
{  char a[]="today is another day.",b[40], *p1,*p2;
    int i;
    p1 = a;
    p2 = b;
    for (; *p1 != '\0' ;p1++,p2++)//p2也要增加，两个位置要同时增加
      *p2 = *p1;
     *p2 ='\0';
   printf("the string a is :%s\n",a);
  printf("the string b is :%s\n",b);
  for (i=0; b[i]!='\0';i++)
    printf("%c",b[i]);




}