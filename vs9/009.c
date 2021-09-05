/**************************************************
 * redo 008.c,but this time use a recursive function
 * *************************************************/
#include <stdio.h>
#include <stdlib.h> // prototype for abs()

double power(double base, int exponent);

int main(void)
{
    double base, output;
    int exponent;

    printf("Test power() function:\n");
    printf("Enter a :double: base and :int: exponent: ");
    while (scanf("%lf %d", &base, &exponent) == 2)
    {
        output = power(base, exponent);

        printf("%f ^ %d = %f \n", base, exponent, output);

        printf("Enter a :double: base and :int: exponent: ");
    }

    return 0;
}

double power(double base, int exponent)
{
    double pow= base;

    if (base == 0 && exponent == 0)
    {
        printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
        return 1.0;
    }
    else if (base == 0 && exponent != 0)
        return 0;
    else if (base != 0 && exponent == 0)
        return 1;

    else
    {
        if(abs(exponent)>0)
       pow = pow * power(base,abs(exponent)-1);
        else

        return pow;
       

        if (exponent < 0)
            pow = 1 / pow;
    }
    return pow;
}
