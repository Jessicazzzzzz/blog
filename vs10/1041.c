#include <stdio.h>


#define SIZE 10

int index_of_max(double *arr, int arr_size);

int main(void)
{
	double test[SIZE]={1.0,4.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9};

	// print results 
	printf("The maximum value occurs at index %d\n", index_of_max(test, SIZE));

	return 0;
}

int index_of_max(double *arr, int arr_size)
{
	// return index of max value in array of doubles

	int index_of_max = 0;
	for (int i = 1; i < arr_size; i++)
		if (*(arr + i) > *(arr + index_of_max))
			index_of_max = i;

	return index_of_max;
}