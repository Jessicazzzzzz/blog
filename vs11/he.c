#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i,times;
    if (argc <2 || (times =atoi(argv[1]))<1)
      printf("usage:%s postive-number\n",argv[0]);
      else 
      for(i=0;i<times;i++)
        puts("hello,good looking!");
        return 0;
}