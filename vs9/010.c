/****************************************
 * generalize the to_binary() function of listing 9.8 to a to_base_n()
 * function that takes a second argument in the range 2-10.it then  should
 * print the number that is its first argument to the number base given
 * by second argument.for example,to_base_n(129,8)would display 201,
 * the base _8 equivalent 129. test the function in a complete program.
 * ******************************************************************/

#include<stdio.h>
void to_binary(unsigned long n,int a);
int main(void)
{
    unsigned long number;
    int n;
    printf("enter an integer for number and another integer for base \n");
    printf("(range from 2 to 10)(q to quit):");
    while((scanf("%lu%d",&number,&n)==2 ) &&(n>=2 &&n<=10))
    {    printf("%lu base-%d equivalent :",number,n);
        to_binary(number,n);
        putchar('\n');
        printf("please enter another pair(q to quit):\n");

    }
    printf("done.\n");
    return 0;

}
void to_binary(unsigned long n,int a)
{
      int r;
      r = n%a;
      if(n>=a)
        to_binary(n/a,a);
        printf("%d",r);
      

}