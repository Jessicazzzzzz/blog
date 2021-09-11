#include <stdio.h>
#include <stdbool.h>

#define BASE 10.0
#define OVERTIME_RATE 1.5
#define BASEHOUR 40
#define BASE1 300
#define BASE2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#if (0)
int main(void)
{
    float hour, gross_pay, taxes, net_pay;
    printf("please enter your working hours:(q to quit)");
    while (scanf("%f", &hour) == 1)
    {
        if (hour > BASEHOUR)
            gross_pay = BASEHOUR * BASE + (hour - BASEHOUR) * OVERTIME_RATE;
        else
            gross_pay = hour * BASE;
        if (gross_pay < BASE1)
            taxes = RATE1 * gross_pay;
        else if (gross_pay > BASE1 && gross_pay < BASE2)
            taxes = RATE1 * BASE1 + (gross_pay - BASE1) * RATE2;
        else
            taxes = RATE1 * BASE1 + (BASE2 - BASE1) * RATE2 + (gross_pay - BASE2) * RATE3;

        net_pay = gross_pay - taxes;
        printf("the gross pay is%.2f,the taxes are %.2f and the net pay is %.2f\n",
               gross_pay, taxes, net_pay);

        printf("please enter your working hours:");
    }
}
#endif
#if (1)
#define HR1 8.75
#define HR2 9.33
#define HR3 10.00
#define HR4 11.20
#define HR5 "quit"
int main(void)
{
    int choice, read;

    float hour, gross_pay, taxes, net_pay, gross_pay_rate;
    bool flag = false;

    while (1)
    {
        printf("************************************\n");
        printf("enter the number corresponding to the desired pay rate or action:\n");
        printf("1)$%.2f/hr 2)$%.2f/hr", HR1, HR2);
        printf("3)$%.2f/hr 4)$%.2f/hr", HR3, HR4);
        printf("5)%s", HR5);
        printf("\n*************************************\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            gross_pay_rate = HR1;
            break;
        case 2:
            gross_pay_rate = HR2;
            break;
        case 3:
            gross_pay_rate = HR3;
            break;
        case 4:
            gross_pay_rate = HR4;
            break;
        case 5:
            flag = true;
            break;

        default:
        {
            while (getchar() != '\n')
                ;
            printf("please enter number range from(1 to 4)\n");
        }
            continue;
        }
        if (flag)
            break;

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
#endif
#if (0)
int main(void)
{
    int input, num, read, div;
    bool not_prime = false;
    num = 2;
    do
    {

        printf("please enter an positive integer:");

        read = scanf("%d", &input);
        while (getchar() != '\n')
            ;

    } while (read != 1 || input < 0);
    while (num <= input)
    {
        not_prime = false;
        for (div = 2; div * div <= num; div++)
        {
            if (num % div == 0)
                not_prime = true;
        }

        if (!not_prime)
        {
            printf("%4d", num);
        }
        num++;
    }
}
#endif
#if (0)
#define RATE_EXCESS 0.28
#define RATE 0.15
#define INCOME1 17850
#define INCOME2 23900
#define INCOME3 29750
#define INCOME4 14875
#define STATE1 "single"
#define STATE2 "head of household"
#define STATE3 "married,joint"
#define STATE4 "married,separate"
int main(void)
{
    float income, income_limit, tax;
    char choice;
    while (1)
    {
        printf("***********************\n");

        printf("a)%s  b)%s\nc)%s d)%s e)quit\n", STATE1, STATE2, STATE3, STATE4);
        printf("************************\n");
        printf("please choose your tax category:\n");
        while ((choice = getchar()) != '\n')
        {
            while (getchar() != '\n')
                ;

            switch (choice)
            {
            case 'a':
                income_limit = INCOME1;
                break;
            case 'b':
                income_limit = INCOME2;
                break;
            case 'c':
                income_limit = INCOME3;
                break;
            case 'd':
                income_limit = INCOME4;
                break;
            case 'e':
                printf("bye");
                return 0;
            default:
                printf("please choose a to d:");
                continue;
            }
            printf("please enter your income:");
            while (scanf("%f", &income) != 1)
            {
                while (getchar() != '\n')
                    ;
                printf("please enter valid number of  your income:");
            }
            if (income <= income_limit)
            {
                tax = income * RATE;
            }
            else
            {
                tax = income_limit * RATE + (income - income_limit) * RATE_EXCESS;
            }
            printf("your income =%.2f,tax is = %.2f,and net income=%.2f\n",
                   income, tax, income - tax);
        }
    }
}
#endif
#if(void)
#define STATE1 "artichokes"
#define STATE2 "beets"
#define STATE3 "carrots"
#define STATE4 "quit"
#define ARTICHOKES_P 2.05
#define BEETS_P 1.15
#define CARROTS_P 1.09
#define BASE1 5
#define BASE2 20
#define SH_FEE1 6.5
#define SH_FEE2 14.0
#define SH_RATE 0.5


int main(void)
{
    char choice;
    float price,a_weight,b_weight,c_weight,total_price,total_weight,shippingfee,discount;
    float a_w, b_w, c_w;
    a_w = b_w = c_w = 0;
    float a_t,b_t,c_t;
    total_weight=0;
    while(1)
   { printf("*************************\n");
    printf("a)%s b)%s c)%s d)%s\n", STATE1, STATE2, STATE3, STATE4);
    printf("**************************\n");
    printf("please enter your choice:");
    while ((choice = getchar()) != '\n')
    {
        while (getchar() != '\n')
            ;
        switch (choice)
        {
        case 'a':
             printf("how much weight do you want?");

        while(scanf("%f",&a_weight)!=1)
        {
            while(getchar()!='\n');
            printf("please enter valid number:");
        }
            price = ARTICHOKES_P;
          a_w +=a_weight;
        a_t = a_w * price;
         break;
        case 'b':
            printf("how much weight do you want?");

        while(scanf("%f",&b_weight)!=1)
        {
            while(getchar()!='\n');
            printf("please enter valid number:");
        }
            price = BEETS_P;
          b_w +=b_weight;
        b_t = b_w * price;
        break;
        case 'c':
            printf("how much weight do you want?");

        while(scanf("%f",&c_weight)!=1)
        {
            while(getchar()!='\n');
            printf("please enter valid number:");
        }
            price = CARROTS_P;
          c_w +=c_weight;
       c_t = c_w * price;
        break;
           
        case 'd':
            return 0;
        default:
            printf("please enter a to c:");
            continue;
        
        }
        total_weight= a_w+c_w+b_w;
        total_price=a_t+b_t+c_t;
        if(total_weight<BASE1)
          {
               shippingfee= SH_FEE1;
          }
          else if(total_weight>BASE1 && total_weight<BASE2)
          {
              shippingfee = SH_FEE2;

          }
          else 
           shippingfee = SH_FEE2+(total_weight-BASE2)*SH_RATE;

           if(total_price>100)
           {
             discount= total_price*0.05;
           printf("the total cost %.2f\n",total_price+shippingfee-discount);
           printf("the arkichokes weight%.2f,price%.2f\n",a_w,a_t);
           printf("the beets weight%.2f,price%.2f\n",b_w,b_t);
           printf("the carrot weight%.2f,price%.2f\n",c_w,c_t);
           printf("the shipping charge %.2f\n",shippingfee);
           printf("the discount %.2f\n",discount);
           }
           else
           {
               printf("the total cost %.2f\n",total_price+shippingfee);
           printf("the arkichokes weight%.2f,price%.2f\n",a_w,a_t);
           printf("the beets weight%.2f,price%.2f\n",b_w,b_t);
           printf("the carrot weight%.2f,price%.2f\n",c_w,c_t);
           printf("the shipping charge %.2f\n",shippingfee);
           printf("the discount %.2f\n",discount);
           
           }
           
       
       



    }
 }
}
#endif
