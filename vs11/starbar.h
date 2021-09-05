#define WIDTH 40
#include<stdio.h>
void starbar(void)
{
    int count;
    for(count=1;count<=WIDTH;count++)
    {
        putchar('*');
        
    }putchar('\n');
}