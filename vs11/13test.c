#include<string.h>
#include<stdio.h>
#include<ctype.h>

#define ANSWER "GRANT"
#define SIZE 40
char * s_gets( char *st, int n);
void change( char *c);
int main(void)
{
    char try[SIZE];
    puts("who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    change(try);
    while(strcmp(try,ANSWER) != 0)
    {
        puts("no,that's wrong. try again.");
        s_gets(try,SIZE);
        change(try);
    }
    puts("That's right.");

    return 0;
}
void change (char *c)
{     
    while (*c)
     {
         *c = toupper(*c);
         c++; 
     }
   

}
char * s_gets( char *st, int n)
{
    char *ret_val;
    ret_val = fgets(st,n,stdin);
    if (ret_val)
    { while(*st !='\n'   && *st !='\0')
         st++;
         if (*st =='\n')
           *st = '\0';
           else 
            while(getchar() != '\n')
            continue;
 
    }
    return ret_val;


}