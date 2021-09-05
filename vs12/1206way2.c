#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int array[1000];
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
    for(int n =0;n<10;n++)
    {c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = c10 = 0;
    srand(n);
    for (int i = 0; i < 1000; i++)
    {
        array[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 1000; i++)
    {
        switch (array[i])
        {
        case (1):
            c1++;
            break;
        case (2):
            c2++;
            break;
        case (3):
            c3++;
            break;
        case (4):
            c4++;
            break;
        case (5):
            c5++;
            break;
        case (6):
            c6++;
            break;
        case (7):
            c7++;
            break;
        case (8):
            c8++;
            break;
        case (9):
            c9++;
            break;
        case (10):
            c10++;
            break;
        }
    }
    printf("c1:%-5d c2:%-5d c3:%-5d c4:%-5d c5:%-5d c6:%-5d c7:%-5d c8:%-5d c9:%-5d c10:%-5d\n", 
    c1,c2,c3,c4,c5,c6,c7,c8,c9,c10);
 
}
}