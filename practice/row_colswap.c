#include <stdio.h>
#if(0)
int main(void)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2];
    int c[6];
    int i = 0, row, col;
    for (row = 0; row < 2; row++)
        for (col = 0; col < 3; col++)
        {
            c[i] = a[row][col];
            i++;
        }

    for (row = 0, i = 0; row < 3; row++)
        for (col = 0; col < 2; col++)
        {
            b[row][col] = c[i];
            i++;
        }

    for (row = 0, i = 0; row < 3; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("%d", b[row][col]);
        }
        printf("\n");
    }
    return 0;
}
#endif
int main(void)
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2],i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
         {
             b[j][i] = a[i][j];
         }
    }
     for (i=0;i<3;i++)
     {
         for (j=0;j<2;j++)
          {
              printf("%5d",b[i][j]);
          }putchar('\n');
     }



}