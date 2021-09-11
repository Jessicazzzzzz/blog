/****************************************************************************
 * write a function that takes three agruments:a character and two integers.
 * the character is to be printed.the first integer specifies the number of times
 * that character is to be printed on a line,and the second integers specifies the number
 * of lines that are to be printed.write a program that makes use of this function.
 * *****************************************************************************/



#include<stdio.h>

void print_ch(char ch,int ,int);
int main(void)
{
    char ch;
    int r,c;
    printf("please enter a character and number for row and column:");
    while(scanf(" %c%d%d",&ch,&r,&c)==3)
    {
        print_ch(ch,r,c);
         printf("please enter a character and number for row and column:");
    }

}
void print_ch(char ch,int a ,int b)
{
     int i,j;
     for(i=0;i<a;i++)
     {
         for(j=0;j<b;j++)
         {
             printf("%c",ch);
         }putchar('\n');
     }
}
