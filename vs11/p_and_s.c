#include <stdio.h>
int main(void)
{
    const char *mesg ="don't be a fool";
    const char *copy;
    copy = mesg;
    //第二是打印指针本身的地址
    printf("mesg = %s; &mesg = %p; value = %p \n",mesg,&mesg,mesg);
    printf("copy = %s; &copy= %p; value = %p \n",copy,&copy,copy);
}