#include<stdio.h>
int main(void)
{  int *ptr;
    int torf[2][2]={12,14,16};
    ptr = torf[0];
    printf("%d%d",*ptr,*(ptr+1));
    printf("%d%d",*torf[0],*(torf[0]+2));


}