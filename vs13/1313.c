#include <stdio.h>
#include <stdlib.h>
void read_f(int row, int col, int ar[row][col], FILE *fp);
int main(void)
{
    FILE *fp, *fp1;
    char ch;
    int row = 20;
    int col = 30;
    int num[row][col];
    char img[row][col + 1];
    if (!(fp = fopen("eddy", "r")))
    {
        fprintf(stderr, "error opening the file.");
        exit(EXIT_FAILURE);
    }
    read_f(row, col, num, fp);
    for (int i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            switch (num[i][j])
            {
            case (0):
                ch = ' ';
                break;
            case (1):
                ch = '.';
                break;
            case (2):
                ch = '\'';
                break;
            case (3):
                ch = ':';
                break;
            case (4):
                ch = '~';
                break;
            case (5):
                ch = '*';
                break;
            case (6):
                ch = '=';
                break;
            case (7):
                ch = '}';
                break;
            case (8):
                ch = '&';
                break;
            case (9):
                ch = '#';
                break;
            default:
                fprintf(stderr, "Error: int out of bounds.\n");
                exit(EXIT_FAILURE);
            }
            img[i][j] = ch;
        }
        img[i][j]='\0';
    }
    fclose(fp);
    if (!(fp1 = fopen("img", "w")))
    {
        fprintf(stderr, "error opening the file.");
        exit(EXIT_FAILURE);
    }
    for(int i=0;i<row;i++)
    {
        puts(img[i]);
        //fprintf(fp1, "%s\n", img[i]);
        fputs(img[i],fp1);
        fputs("\n",fp1);
    }
    fclose(fp1);
    return 0;
}
void read_f(int row, int col, int ar[row][col], FILE *fp)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (fscanf(fp, "%d", &ar[i][j]) != 1)
            {
                fprintf(stderr, "error data.");
                exit(EXIT_FAILURE);
            }
        }
    }
}