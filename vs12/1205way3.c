#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void random_ints(int *array);
int main(void)
{
    int int_array[100];
     random_ints(int_array);

    for (int i = 0; i < 100; i++)
    {
        printf("%2d ", int_array[i]);
        if (i % 20 == 19)
            putchar('\n');
    }

    putchar('\n');
    return 0;
}
void random_ints(int *array)
{
    int temp;
    srand((unsigned int )time(0));
    for (int i = 0; i < 100; i++)
    {
        array[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 100 - 1; i++)

        for (int j = i + 1; j < 100; j++)
        {
            if (array[i] < array[j])

               { temp = array[i];
            array[i] = array[j];
  array[j] = temp;
               }
          
        }
}