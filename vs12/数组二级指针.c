#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define cell_lenght 10
 
int main(void)
{
 
	char null = 'y';
	char cell_content[cell_lenght]; //字符数组
	char *cell_content_char = cell_content;//字符数组赋值给字符指针
	char **char_pointer = &cell_content_char;
	//cell_content_char = "i love";
	printf("default value.\n");
	strcpy(cell_content, "i owe");
	printf("cell_content_char = %s, add = %p.\n", cell_content_char, cell_content_char);
	printf("cell_content      = %s, add = %p.\n", cell_content, cell_content);
	printf("*char_pointer     = %s, add = %p.\n", *char_pointer, *char_pointer);
    printf("**(char_pointer+3)= %c\n",*(*char_pointer+3));
    printf("*(cell_content_char+3)= %c\n",*(cell_content_char+3));
    printf("cell_content[3]=%c\n",cell_content[3]);
								// char_pointer是指向cell_content_char的指针，保存的是其首地址。
								// *char_pointer      是cell_content_char字符串的值
						
	printf("starting 1st eval test.\n");
	(*(*char_pointer)) = null;  //替换cell_content_char字符串的首字符
 
	printf("*char_pointer     = %s, add = %p.\n", *char_pointer, *char_pointer);
	printf("cell_content_char = %s, add = %p.\n", cell_content_char, cell_content_char);
	printf("cell_content      = %s, add = %p.\n", cell_content, cell_content);
 
	printf("starting 2nd eval test.\n");
	(*char_pointer)++;         //将cell_content_char指针移到下一位，(*char_pointer)指的是cell_content_char字符指针和cell_content字符串数组，
								//即指向了cell_content字符串数组"i owe"的第二位 space
	(*(*char_pointer)) = null; //替换cell_content字符串数组第二位空格为null
								//由于指针移到第二位了，所以*char_pointer和cell_content_char的首地址为第二位。
								//cell_content第一位不变，而是第二位插入了null
	printf("*char_pointer     = %s, add = %p.\n", *char_pointer, *char_pointer); 
	printf("cell_content_char = %s, add = %p.\n", cell_content_char, cell_content_char);
	printf("cell_content      = %s, add = %p.\n", cell_content, cell_content);
 
	return 0;
}
