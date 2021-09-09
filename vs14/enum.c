#include<stdio.h>
#include<stdbool.h>
#include<string.h>//strcmp
#define SLEN 30
char *s_gets(char *st ,int n);
enum spectrum{red,orange,yellow,green,blue,violet};
const char * colors[]={"red","orange","yellow","green","blue","violet"};


int main(void)
{
    char choice[SLEN];
    enum spectrum color;
    bool color_is_found=false;
    printf("enter a color (empty line to quit):");
    while(s_gets(choice,SLEN)!=NULL &&choice[0]!='\0')
    {
        for (color=red;color<=violet;color++)
        {
            if(strcmp(choice,colors[color])==0)
            {
                color_is_found=true;
                break;
            }
        }
   
    if(color_is_found)
    {
        switch(color)
        {
          case red : puts("roses are red.");
                     break;
                  case orange:puts("poppied ate orange.");
                     break;
                     case yellow : puts("sunflower are yellow.");
                     break;
                     case green :puts ("grass is green.");
                     break;
                     case blue: puts("blueberries are blue.");
                     break;
                     case violet :puts("violet are violet.");
                     break;

        }
    }else
    printf("i don't know about the color%s.\n",choice);
    color_is_found= false;
    puts("next color ,please (empty line to quit):");

    }
    puts("bye.");
    return 0;
}

char *s_gets(char *st ,int n)
   {
       char *ret_val;
       char *find;
              ret_val = fgets(st,n,stdin);
       if(ret_val)
       {
           find=strchr(st,'\n');
           if(find)
             *find = '\0';
             else 
             while(getchar()!='\n')
                continue;
       }return ret_val;
   }