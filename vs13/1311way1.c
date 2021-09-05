#include<string.h>
#include<stdlib.h>
#include<stdio.h>
char *s_gets(char *st,int n,FILE *fp);

#define SIZE 255

int main(void)
{   FILE *fp;
   char ch[SIZE];
   char st[]="is";
   
   char *same;
    if(!(fp=fopen("wordy","r")))
    {
      fprintf(stderr,"error.");
      exit(EXIT_FAILURE);

    }
   
       while(!feof(fp))
       {  ch[0]='\0';
           s_gets(ch,SIZE,fp);
       
         same=strstr(ch,st);

         if(same)
         {
             printf("%s\n",ch);
         }
       }
       if(fclose(fp))
       {
           fprintf(stderr,"error.");
      exit(EXIT_FAILURE);
       }

    }
   


char *s_gets(char *st,int n,FILE *fp)
{
    char *v;
  char *find;
    v=fgets(st,n,fp);
    if(v)
    {
        find= strchr(st,'\n');
        if(*find)
           *find='\0';
           else
           while(getchar()!='\n')
             continue;

    }
    return v;
}