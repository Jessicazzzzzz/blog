#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 10

char *s_gets(char *st,int n);
char *reverse(char *st);

int main(void)
{    char str[SIZE];
    puts("enter a  string");
     s_gets(str,SIZE);
    while(*str)
    {
      reverse(str);
      puts(str);
     
      printf("now the string is reversed %s\n",str);
       puts("enter a  string");
     s_gets(str,SIZE);
    }
    puts("bye");
    return 0;
}
char *s_gets(char *st,int n)
{      char *vet_val;
       vet_val = fgets(st,n,stdin);
       if (vet_val)
       {
           while(*st !='\n' &&*st !='\0')
            st++;
            if (*st == '\n')
              *st ='\0';
              else
               while(getchar()!='\n')
                 continue;

       }
   return vet_val;

}

char * reverse(char *start)
{
  
  char *end =start;
  char temp;
  while(*(end+1) !='\0')
     end++;
     while(start<end)
      {  temp =*start;
          *start = *end;
          *end = temp;
          end--;
          start++;

      }
return start;

}

