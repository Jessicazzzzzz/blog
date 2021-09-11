#include<stdio.h>
#include<string.h>
char *s_gets(char *st);

#define SIZE 30
int main(void)
{
    char words[SIZE]="hello world !!  ";
  
    s_gets(words);
    printf("the adrress of \' \' is %p", s_gets(words));
    return 0;
}
char *s_gets(char *st)
{
       while (*st != ' ' && *st != '\0')//stop at the first blank or null
              st++;
         if (*st == '\0') 
           return NULL;//Null is the null poiter
           else 
           return st;

}