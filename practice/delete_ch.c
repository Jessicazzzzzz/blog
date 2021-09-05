#include<stdio.h>
#include<string.h>
#define SPACE ' '
int main(void)
{
    char ch[20]= "hello,world.";
    char c;
    printf("please enter one character ,i will delete it:");
    while((c=getchar())!='\n')
    {
          for(int i=0;i<strlen(ch);i++)
          {
              if(c==ch[i])
               continue;
                else 
                  printf("%c",ch[i]);
          }

    }
    return 0;
}