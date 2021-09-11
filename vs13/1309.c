#include<stdio.h>
#include<stdlib.h>
#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];
    int count=0;
    if((fp=fopen("wordy","a+"))==NULL)
    {
        fprintf(stdout,"can not open \"wordy\"file.\n");
        exit(EXIT_FAILURE);

    }
    rewind(fp);
    while(fgets(words,MAX,fp)!=NULL)
    count++;
    //rewind(fp);不一定需要这个
    puts("enter words to add to the file;press the #");
    puts("key at the begingging of a line to terminate.");
    while((fscanf(stdin,"%40s",words)==1)&& (words[0]!='#'))
    {    count++;
        fprintf(fp,"%d %s\n",count,words);
    }
       //这个是将string打印到文件中去
      
       puts("file contents:");
       rewind(fp);//从文件开头开始
       while(fgets(words,MAX,fp)!=NULL)
          puts(words);//这个是打印到terminal 
          puts("done!");
          if(fclose(fp)!=0)
           fprintf(stderr,"error closing file\n");
           return 0;
           
}