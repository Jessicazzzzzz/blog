#include<stdio.h>
void enter_string(char str[80])
{   printf("please enter a sentence:"); 
    fgets(str,80,stdin);
}