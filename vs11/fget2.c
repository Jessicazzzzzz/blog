#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    puts("enter strings (empty line to quit):");
    while(fgets(words,STLEN,stdin) != NULL && words[0] !='\n')
    //fgets()读到文章结尾或者空行
    
         fputs(words,stdout);
        // puts(words);
         puts("done.");
         return 0;
}
    