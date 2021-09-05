#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROW 20
#define COL 30
char *s_gets(char *st, int n, FILE *fp);

int main(void)
{
    FILE *fp, *fp1;
    int num[ROW][COL];
    char img[ROW][COL + 1];
    char ch;
    if (!(fp = fopen("eddy", "r")))
    {
        fprintf(stderr, "error opening file.");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (fscanf(fp, "%d", &num[i][j]) != 1)
            //if(fscanf(fp,"%d",*(num+i)+j)!=1)
            {
                fprintf(stderr, "Invalid or corrupted data file.\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    fclose(fp);
    // convert ints to characters
    for (int i = 0; i < ROW; i++)
    {
        int j;
        for (j = 0; j < COL; j++)
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
        img[i][j] = '\0'; // j = COLS here
    }
    // open image file
    if ((fp1 = fopen("mount picturest", "w")) == NULL)
    {
        fprintf(stderr, "Could not open file %s.\n", "img");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < ROW; i++)
    {
        // print to console and file
        puts(img[i]);
        fprintf(fp1, "%s\n", img[i]);
    }
    fclose(fp1);

    return 0;
}
