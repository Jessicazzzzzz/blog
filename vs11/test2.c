#include<string.h>
#include<stdio.h>
//int length(char *st,int n );
int length(char *st);
/*
int main(void)
{   char *st = "hello,,world.";
   int i;
     
   puts(st);
    i= length(st,strlen(st));
   printf("the length is %d",i);
   return 0;

}

int length(char *st,int n )
{   
    n = strlen(st);
    return n;

}*/
int main(void)
{
  char *st = "hello,,world.";
  printf("the length of string is %d",length(st));
  return 0;


}
int length(char *st)
{
    int ct = 0;
    while(*st++)
      ct++;
      return ct;
     
}