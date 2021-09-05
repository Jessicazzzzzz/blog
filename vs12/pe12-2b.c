#include<stdio.h>
#include "pe12-2a.h"
int main(void)
{    int mode;
    printf("enter 0 for metric mode,1 for us mode:");
    scanf("%d",&mode);
    while(mode>=0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("enter 0 for metric mode,1 for us mode:");
        printf("(-1to quit)");
        scanf("%d",&mode);
    }
    printf("done.\n");
    return 0;
    
}