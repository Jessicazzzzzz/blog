#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i, exp;
    float num, sum;
    sum = 1.0;
    if (argc != 3)
    {
        puts("parameter error!unable to  calculate power. ");
    }
    else
    {
        num = atof(argv[1]);
        exp = atoi(argv[2]);
        for (i=1;i<=exp;i++)
          sum *=num;
        printf("%.2f raised to the power of %d is %.2f ",num,exp,sum);  
    }
    return 0;
}