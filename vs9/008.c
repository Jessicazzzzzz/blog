/*************************************************************
 * shows a power()function that return the result of raising 
 * a type double number to a positive integer value.improve 
 * the function so that it correctly handles negative powers.
 * also build the function that 0 to any power other than 0 is 0
 * and tha t any nunber to the 0 power is 1.
 * (it shoule report that 0 to the 0 is undefined,then say it is usinga value 1)
 * use a loop.
 * test the function in a program.
 * *************************************************************/
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
	double power = base;

	if (base == 0&&exponent==0)
	{
		printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
			return 1.0;
	}	
		else if (base==0&&exponent!=0)
			return 0;
            else if (base!=0 &&exponent==0)
            return 1;
	
  else
	{for (int i = 1; i < abs(exponent); i++)
	{
		power *= base;
	}

	if (exponent < 0)
		power = 1 / power;
    }
	return power;
}
