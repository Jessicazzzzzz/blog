#include <stdio.h>
#define MSG "i am a symbolic string constant."
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "i am a string in an array.";
    const char *pt1 = "something is pointing at me.";
    puts(MSG);
    puts(words);
    puts(pt1);
    puts(pt1+1);
    words[8]='p';
    puts(words);
    return 0;

}