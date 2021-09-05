#include <stdio.h>
#define STLEN 10

int main(void)
{   char words[STLEN];
     int i=0;
    puts("enter your strings:");
    //这样的永远在循环中

    //while(fgets(words,STLEN,stdin) != NULL  || words[0] =='\n' )

    while(fgets(words,STLEN,stdin) != NULL  && words[0] !='\n' )
    { //遍历字符串，直到遇到换行符或者空字符
       while (words[i] !='\n' && words[i] != '\0')
               i++;
           if(words[i] == '\n')
               words[i] = '\0';
               
              else 
               while(getchar() !='\n') 
               continue;
                
                   
               fputs(words,stdout);
             //puts(words);
    }

    puts("done");
    return 0;


}