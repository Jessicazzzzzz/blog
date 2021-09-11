/******************************************************
 * write a program that reads characters from the standard  input
 * to end_of file.for each character ,have the program report whether 
 * it is a letter.if it is a letter,also report its numberical location
 *  in the alphabet.
 * for example ,c andC would both be letter3.incorporate a function 
 * that takes a character as an argument and returns the numberical loction 
 *  if the character is a letter and that return -1 otherwise.
 *******************************************************/


#include<stdio.h>
#include<ctype.h>
int test(char );
int main(void)
{
    char ch;
    int location;//通过返回值去判断效果更好
    printf("please enter some sentence to test:");
    while((ch=getchar())!='\n')
    {
        if((location=test(ch))==-1)//把test的值符给location，再去跟-1 做对比
          printf("%cthis is not character.\n",ch);
        else
        printf("the %c location is %d\n",ch,  test(ch));
      
           
    }
}
int  test(char ch)
{
      ch= tolower(ch);
      if(isalpha(ch))
        return ch-96;
      else 
        return -1;


}
