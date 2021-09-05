#include <stdio.h>
int main(void)
{
    int i, j, k;
    for (i = 1; i < 4; i++)
    {
        for (j = 1; j < 4; j++)
        {
            for (k = 1; k < 4; k++)
            {
                printf("%d%d%d", i, j, k);
                putchar('\n');
            }
        }
    }

    return 0;
}