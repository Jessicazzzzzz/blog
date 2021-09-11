#include<stdio.h>
#include<string.h>
#if(0)
int main(void)
{
    char note[] = "see you at the snack bar.";
    char *ptr;
    ptr = note;
    puts(ptr);
    puts(++ptr);
    note[7] = '\0';
    puts(note);
    puts(++ptr);
    return 0;

}
#endif
#if(0)
int main(void)
{
    char food[] = "yummy";
    char *ptr;
    ptr = food +strlen (food);
    while(--ptr >= food)
    puts(ptr);
    return 0;
    
}
#endif
#if(0)
int main (void)
{
    char goldwyn[40] = "art of it all ";
    char samuel[40] = "i read p";
    const char * quote = "the way through.";
    strcat(goldwyn,quote);
    strcat(samuel, goldwyn);
    puts(samuel);
    return 0;


}
#endif
#define M1 "how are ya, sweetie? "
char M2[40] ="beat the clock.";
char *M3 = "chat";
int main(void)
{
    char words[80];
    printf(M1);
    puts(M1);
    puts(M2);
    puts(M2 + 1);
    strcpy(words,M2);
    strcat(words,"win a toy.");
    puts(words);
    words[4] = '\0';
    puts(words);
    while(*M3)
     puts(M3++);
     puts(--M3);
     puts(--M3);
     M3 =M1;
     puts(M3);
     return 0;

}