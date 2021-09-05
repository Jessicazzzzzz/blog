#include<stdio.h>
int main(void)
{ int days[]={31,28,31,30,31,30,31,31,30,31,31};
   int  *p;
    p=days;
    int index;
    for(index=0;index<sizeof days/sizeof days[0];index++)
    {
        printf("month %2d has %d days.\n",index+1,days[index]);
    }
    printf("%lu\n",sizeof days/sizeof days[0]);
    printf("*p++=%d",*p++);
    printf("*p=%d\n",*p);
     printf("*(p++)=%d",*(p++));
    printf("(*p)++=%d,*p=%d\n",(*p)++,*p);
    return 0;
}