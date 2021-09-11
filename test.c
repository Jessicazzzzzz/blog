#include <stdio.h>
int main(void)
{
    char ch;
    printf("please enter input:");
    ch=getchar();
    if(ch&32)//判断第五位是0还是1来确定是大小写，第五是1，是小写
    {
        ch = ch & 95;
        //ch=ch&223;//变大写
    }else{
        ch = ch |32;
    }
    putchar(ch);
}