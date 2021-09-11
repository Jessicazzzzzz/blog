
#include <stdio.h>
#include <ctype.h>

char getfirst(void);
float number(void);
void menu(void);

int main(void)
{
    char choice;
    float num1, num2;
    

    while (1)
    {
        menu();
        choice = getfirst();
        while (choice != 'a' && choice != 's' && choice != 'm' && choice != 'd' && choice != 'q')
        {
            printf("please enter valid respond(a,s,m,d,or q)\n");
            menu();
            choice = getfirst();
        }
        if (choice == 'q')
            break;

        printf("Enter first number:");
        num1 = number();
        printf("Enter second number:");
        num2 = number();

        switch (choice)
        {
        case 'a':
            printf("%.2f+%.2f=%.2f\n", num1, num2, num1 + num2);
            continue;
        case 's':
            printf("%.2f-%.2f=%.2f\n", num1, num2, num1 - num2);
            continue;
        case 'm':
            printf("%.2f*%.2f=%.2f\n", num1, num2, num1 * num2);
            continue;
        case 'd':
           while (num2 == 0)
            {
                printf("Enter a number other than 0:");
                num2 = number();
               
            }
          
                printf("%.2f/%.2f=%.2f\n", num1, num2, num1 / num2);
            continue;
        }
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

void menu(void)
{
     printf("Enter the operation of your choice:\n");
        printf("a. add   s. substract\n");
        printf("m. multiply  d .division\n");
        printf("q.quit\n");
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


