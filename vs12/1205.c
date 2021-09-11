
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int array[100]; 
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

              {temp = array[i];
            array[i] = array[j];
            array[j] = temp;

              }  
        }

    for (int i = 0; i < 100; i++)
    {    
        if (i % 20 == 0)
            putchar('\n');
    printf("%3d", array[i]);
    }
}
