#include<string.h>
#include<stdlib.h>
#include<stdio.h>
char *s_gets(char *st,int n,FILE *fp);

#define SIZE 255

int main(int argc,char *argv[])
{   FILE *fp;
   char ch[SIZE];
   char *same;
    if(argc!=3)
    {
      fprintf(stderr,"error.");
      exit(EXIT_FAILURE);

    }
    else
    {
        if(!(fp=fopen(argv[2],"r")))
        {   fprintf(stderr,"error.");
            exit(EXIT_FAILURE);
        }
       while(s_gets(ch,SIZE,fp))
       {
       //它返回的是字符串argv[1]在ch中出现的首位置，如果找不到就返回null
         same=strstr(ch,argv[1]);

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