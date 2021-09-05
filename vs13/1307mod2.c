/****
 * 该程序是打印两个文件的内容一行一行的打印出来，
 * 读到相同的行数就停止。
 * *******/



#include <stdio.h>
#include <stdlib.h>

#define LLEN 70 



int main(void)
{
	FILE *file1, *file2;
	char tmp[LLEN];
	char  ch,ch1;

	

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
//while 中设置的条件是｜｜，它会先执行第一，如果第一个不符和，再执行第二个条件
//需要判断的是第一个文件遇到new line 就停止，然后再打印第二个文件中的行数，
//但是如果第一文件到文件末尾怎么办呢？因为ch1已经读取了，再进入循环会再读一次，这时候就需要再做个判断
//就是当第一个文件读到末尾的时候，怎么处理文件2.


	while (((ch=getc(file1))!=EOF) || ((ch1=getc(file2))!=EOF))
	{     if(  ch!=EOF&&ch!='\n'  )
	          putchar(ch);
		else if(ch!='\n')	
         {while((ch1)!=EOF)
			{
				if(ch1!='\n')
				     putchar(ch1);
					 else
					  break;
            ch1=getc(file2);
            }putchar('\n');
         }
		else
		{   ch1=getc(file2);
			while((ch1)!=EOF)
			{
				if(ch1!='\n')
				     putchar(ch1);
					 else
					  break;
			   ch1=getc(file2);
			}
            putchar('\n');
        }
	}
if (fclose(file1) != 0)
        printf("Could not close file \n" );
    if (fclose(file2) != 0)
        printf("Could not close file \n");
	return 0;
}

