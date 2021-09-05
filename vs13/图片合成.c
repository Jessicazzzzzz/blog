#include <stdlib.h>
#include <stdio.h>
int main(void)
{
     FILE *f_pic,*f_file,*f_finish;
     char ch;
     char pic_name[20],file_name[20],finish_name[20];
     printf("please enter the name of picture and file\n");
     printf("picture:");
     scanf("%s",pic_name);
     printf("file name:");
     scanf("%s",file_name);
     printf("finish name:");
     scanf("%s",finish_name);
     if(!(f_pic=fopen(pic_name,"rb")))
     {
         printf("cannot open the picture%s!",pic_name);
         exit(EXIT_FAILURE);
     }
     if(!(f_file=fopen(file_name,"rb")))
     {
         printf("cannot open the file%s!",file_name);
         exit(EXIT_FAILURE);
     }
     if(!(f_finish=fopen(finish_name,"wb")))
     {
         printf("cannot open the file%s!",finish_name);
         exit(EXIT_FAILURE);
     }
    while(!(feof(f_pic)))//feof读取正确返回一个0，那么读到结尾就是一个非0，！0就=0
    {
         ch=fgetc(f_pic);
         fputc(ch,f_finish);
    }
    fclose(f_pic);
    while(!(feof(f_file)))//feof读取正确返回一个0，那么读到结尾就是一个非0，！0就=0
    {
         ch=fgetc(f_file);
         fputc(ch,f_finish);
    }
    fclose(f_file);
    fclose(f_finish);
    system("pause");

}