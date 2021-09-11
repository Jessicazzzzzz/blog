/******************************
 * 1 2 3
 * 4 5 6
 * 7 8 9  
 * 该程序要求打印
 *   2
 * 4 5 6
 *   8
 * *******************************/
#include <stdio.h>

int main(void)
{
    int i, j;
    int array[3][3];
    printf("please enter 9 numbers:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
            printf(" %d", array[i][j]);
        }
        putchar('\n');
    }
#if (1)
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    array[i][j] = ' ';
                    printf("%-6c", array[i][j]);
                }
                else
                    printf("%-6d", array[i][1]);
            }

            else
                printf("%-6d", array[i][j]);
        }
        putchar('\n');
    }
#endif
#if (0)
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 1 || j == 1)
            {
                printf("%-6d", array[i][j]);
            }
            else
            {
                printf("%-6c", ' ');
            }
        }
        putchar('\n');
    }
#endif
    return 0;
}