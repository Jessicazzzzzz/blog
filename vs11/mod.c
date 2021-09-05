#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT 81
void Toupper(char *);
int Punctcount(const char *);
int main(void)
{
    char line[LIMIT];
    char * find;
    puts("please enter a line:");
    fgets(line,LIMIT,stdin);
    find = strchr(line,'\n');
    if (find)// 如果地址不是NULL
    *find = '\0';
     Toupper(line);
     puts(line);
     printf("that line has%d puntuation character.\n",Punctcount(line));
     return 0;
}
void Toupper(char *str)
{
   while(*str)
   {
       *str = toupper(*str);
       str++;

   }
}
int Punctcount(const char *str)
{
    int ct=0;
    while(*str)
    {
        if(ispunct(*str))
          ct++;
          str++;
    }
    return ct;
}