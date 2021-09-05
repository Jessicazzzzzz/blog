#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int row=0, cols=0, lastrow_cols;
    FILE *fp, *fp1;
    
   int ch;
    bool flag;
    if (!(fp = fopen("eddy", "r")))
    {
        fprintf(stderr, "can not open the file.");
        exit(EXIT_FAILURE);
    }
    //这是加一个判断条件，如果每行输入不同就退出
    flag = true;
    while ((ch = getc(fp)) != EOF && isdigit(ch))
    {
        cols = 0;
        while ((ch = getc(fp)) != EOF && ch != '\n')
        {
            if (isdigit(ch))
                cols++;
        }
        if (flag)
        {
            flag = false;
        }
        else
        {
            if (cols != lastrow_cols)
              {
                  fprintf(stderr, "Invalid data file: unequal number of columns in rows.\n");
            exit(EXIT_FAILURE);
              }  
        }lastrow_cols=cols;

    }
    //如果没有输入也退出
    if (cols == 0)
	{
		fprintf(stderr, "Invalid data file.\n");
		exit(EXIT_FAILURE);
	}
    //这时候指针已经到结尾了需要从头开始
    rewind(fp);
    while((ch=getc(fp))!=EOF)
    {
        if(ch=='\n')
          row++;
    }
    
int data[row][cols];
    char img[row][cols + 1];
	// read ints from file
	rewind(fp);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			if (fscanf(fp, "%d", *(data + i) + j) != 1)
			{
				fprintf(stderr, "Invalid data file.\n");
				exit(EXIT_FAILURE);
			}
	fclose(fp); // done with data file

	// convert ints to characters
	for (int i = 0; i < row; i++)
	{	
		int j;
		for (j = 0; j < cols; j++)
		{
			switch (data[i][j])
			{
				case(0):
					ch = ' ';
					break;
				case(1):
					ch = '.';
					break;
				case(2):
					ch = '\'';
					break;
				case(3):
					ch = ':';
					break;
				case(4):
					ch = '~';
					break;
				case(5):
					ch = '*';
					break;
				case(6):
					ch = '=';
					break;
				case(7):
					ch = '}';
					break;
				case(8):
					ch = '&';
					break;
				case(9):
					ch = '#';
					break;
				default:
					fprintf(stderr, "Error: int out of bounds.\n");
					exit(EXIT_FAILURE);
			}
			img[i][j] = ch;
		}
		img[i][j] = '\0'; // j = cols here
	}

	// open image file
	if ((fp1 = fopen("img1", "w")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n","img1");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < row; i++)
	{
		// print to console and file
		puts(img[i]);
		fprintf(fp1, "%s\n", img[i]);
	}
	fclose(fp1);

	return 0;

}

