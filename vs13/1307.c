#include <stdio.h>
#include <stdlib.h>

#define LLEN 70 



int main(void)
{
	FILE *file1, *file2;
	
	int ch;

	

	if ((file1 = fopen("eddy", "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", "eddy");
		exit(EXIT_FAILURE);
	}
	if ((file2 = fopen("wordy", "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", "wordy");
		exit(EXIT_FAILURE);
	}
//设定读取字符的条件，都读到文件的结尾
	while (((ch=getc(file1))!=EOF) || ((ch=getc(file2))!=EOF))
	{    
		 if(  ch!='\n'  )
	          putchar(ch);
			

			
		else
		{ putchar('\n');
			while((ch=getc(file2))!=EOF)
			{
				if(ch!='\n')
				     putchar(ch);
					 else
					  break;
			
			}putchar('\n');
		}
	
	}
	if (fclose(file1) != 0)
        printf("Could not close file \n" );
    if (fclose(file2) != 0)
        printf("Could not close file \n");

	return 0;
}

