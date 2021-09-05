#include<stdio.h>
void put1(const char*);
int put2(const char*);

int main(void)
{
    put1("if i'd as much money");
    put1("as i could spend,\n");
    //nested in printf ,in the act of finding the value of puts2,the computer first must
    //execute  that function,causing the string to be printed.
    printf("I count %d charaters.\n",
            put2("I never would cry old chairs to mend."));
            return 0;
}
void put1(const char *st)
{
   while(*st)
   putchar(*st++);
}
int put2(const char *st)
{  int count=0;
while(*st)
{
    putchar(*st++);
    count++;

}
putchar('\n');//string will created the newline .
return count;

}