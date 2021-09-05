#include<stdio.h>
#include"starbar.h"
#define NAME "GIGATHINK,INC"
#define ADDRESS "101 MEGABUCK PLAZE"
#define PLACE "MEGAPOLIS ,CA 94904"
void starbar(void);
int main(void)
{
    starbar();
    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);
    starbar();
    return 0;
}
