#include<stdio.h>
#include<stdlib.h>
#define LEN 10
int main(void)
{
    FILE *fp;
    char buff[LEN];
    //打开fp 文件
    if(! (fp=fopen("eddy","r")))
    {
        fprintf(stderr,"can not open the file");
        exit(EXIT_FAILURE);

    }
    //从fp文件中读取len 长度的字节，并把它放入buff 缓冲区，
   fgets(buff,LEN,fp);
   //打印出来
   printf("%s",buff);
   fclose(fp);
   return 0;

}