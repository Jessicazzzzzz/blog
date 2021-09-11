#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROW 20
#define COL 30
#define LEVELS 10
const char trans[LEVELS + 1] = " .':~*=&%@";

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
       
        for (int j = 0; j < COL; j++)
        { img[i][j]=trans[num[i][j]];
        }
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