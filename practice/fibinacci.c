/*******************
 * 该程序是找出fibinacci的值
 * **********************/

#include <stdio.h>
#define SIZE 20

int main(void)
{

    int i = 0;
    int finoccino[SIZE];
    while (i < 2)
    {
        finoccino[i] = 1;

        i++;
    }
    for (i = 2; i < SIZE; i++)
    {

        finoccino[i] = finoccino[i - 1] + finoccino[i - 2];
    }
    for (i = 0; i < SIZE; i++)
    {

        if (i % 5 == 0)
        {
            putchar('\n');
        }
        printf("%5d", finoccino[i]);
    }
    return 0;
}