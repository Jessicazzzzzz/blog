#include <stdio.h>
#if (0)
int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        count++;
        if (ch == '\n')
            printf("\\n%-8d", ch);
        else if (ch == '\t')
            printf("\\t%-8d", ch);
        else
            printf("%c%-8d", ch, ch);

        if (count % 10 == 0)
            printf("\n");
    }

    return 0;
}
#endif
#if (0)

#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch, letter_count, word_count;
    letter_count = word_count = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF)
    {

        if (isalpha(ch) && !inword)
        {
            inword = true;
            word_count++;
            letter_count++;
        }
        else if (isalpha(ch) && inword)
        {
            letter_count++;
        }
        else
            inword = false;
    }
    printf("letter = %d,the words= %d,the average=%.2f",
           letter_count, word_count, (float)letter_count / word_count);

    return 0;
}
#endif
#if (0)
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int guess = 50;
    int low = 50;
    int high = 100;
    char ch;
    printf("pick an integer from 1 to 100.i will try to guess");
    printf("it.\nrespond with a y if my guess is right and with ");
    printf(" l  if it is low and h if it is high.\n");
    printf("un ...is your number %d?", guess);
    while ((ch = getchar()) != 'y')
    {
        while (getchar() != '\n')
            ;
        ch = tolower(ch);
        if (ch == 'l')
        {
            guess = (guess + high) / 2;
            printf("...is the number is%d?", guess);
        }
        else if (ch == 'h')
        {
            guess = (guess + low) / 2;
            printf("...is the number is%d?", guess);
        }
        else
        {
            printf("i only recognize 'l' or 'h',please try again.");
        }
    }
    printf("i know i can do it.");
    return 0;
}
#endif
#if (0)
#include <stdio.h>
#include <ctype.h>
char getfirst(void);
int main(void)
{
    char ch;
    printf("please enter some words to test:");
    ch = getfirst();
    printf("%c", ch);

    return 0;
}

char getfirst(void)
{
    char ch;
    do
    {
        ch = getchar();
    } while (isspace(ch));
    while (getchar() != '\n')
        ;

    return ch;
}
#endif
#if (0)
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
char getfirst(void);
#define BASE 10.0
#define OVERTIME_RATE 1.5
#define BASEHOUR 40
#define BASE1 300
#define BASE2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define HR1 8.75
#define HR2 9.33
#define HR3 10.00
#define HR4 11.20
#define HR5 "quit"
int main(void)
{
    int choice, read;

    float hour, gross_pay, taxes, net_pay, gross_pay_rate;

    while (1)
    {
        printf("************************************\n");
        printf("enter the number corresponding to the desired pay rate or action:\n");
        printf("a)$%.2f/hr b)$%.2f/hr", HR1, HR2);
        printf("c)$%.2f/hr 4d)$%.2f/hr", HR3, HR4);
        printf("e)%s", HR5);
        printf("\n*************************************\n");

        choice = getfirst();

        switch (choice)
        {
        case 'a':

            gross_pay_rate = HR1;
            break;
        case 'b':
            gross_pay_rate = HR2;
            break;
        case 'c':
            gross_pay_rate = HR3;
            break;
        case 'd':
            gross_pay_rate = HR4;
            break;
        case 'e':
            return 0;

        default:
        {
            printf("please enter charcter range from(a to e)\n");
            continue;
        }
        }

        printf("please enter your working hours:(q to quit)");
        scanf("%f", &hour);

        if (hour > BASEHOUR)
            gross_pay = BASEHOUR * gross_pay_rate + (hour - BASEHOUR) * OVERTIME_RATE;
        else
            gross_pay = hour * gross_pay_rate;
        if (gross_pay < BASE1)
            taxes = RATE1 * gross_pay;
        else if (gross_pay > BASE1 && gross_pay < BASE2)
            taxes = RATE1 * BASE1 + (gross_pay - BASE1) * RATE2;
        else
            taxes = RATE1 * BASE1 + (BASE2 - BASE1) * RATE2 + (gross_pay - BASE2) * RATE3;

        net_pay = gross_pay - taxes;
        printf("the gross pay is%.2f,the taxes are %.2f and the net pay is %.2f\n",
               gross_pay, taxes, net_pay);
    }
}
char getfirst(void)
{
    char ch, waste;
    do
    {
        ch = getchar();
    } while (isspace(ch));
    while ((waste = getchar()) != '\n')
        ;
    return ch;
}
#endif

#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>
char getfirst(void);
float number(void);
int main(void)
{
    char choice;
    float num1, num2;
   
    
        printf("Enter the operation of your choice:\n");
        printf("a. add   s. substract\n");
        printf("m. multiply  d .division\n");
        printf("q.quit\n");
        choice = getfirst();
        
        while(choice !='q')
       { 
           printf("Enter first number:");
        num1 = number();
        printf("Enter second number:");
        num2 = number();
           switch (choice)
        {
        case 'a':
            printf("%.2f+%.2f=%.2f\n", num1, num2, num1 + num2);
            break;
        case 's':
            printf("%.2f-%.2f=%.2f\n", num1, num2, num1 - num2);
            break;
        case 'm':
            printf("%.2f*%.2f=%.2f\n", num1, num2, num1 * num2);
           break;
        case 'd':
            while(num2 == 0)
            {
                printf("Enter a number other than 0:");
                num2 = number();
                
            }
           
                printf("%.2f/%.2f=%.2f\n", num1, num2, num1 / num2);
          break;
        

            default: printf("invalid input.please try again.\n");
                    break;
        }
        printf("Enter the operation of your choice:\n");
        printf("a. add   s. substract\n");
        printf("m. multiply  d .division\n");
        printf("q.quit\n");
         choice = getfirst();
    
    }

         
        return 0;
}
char getfirst(void)
{
    char ch;
    ch = tolower(ch);
    do
    {
        ch = getchar();

    } while (isspace(ch));
    while (getchar() != '\n')
        ;
    return ch;
}
float number(void)
{
    float n;
    char ch;
    while (scanf("%f", &n) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an number\n");
        printf("please enter a number ,such as 2.5,-1.78E8,or3:");
    }
    return n;
}