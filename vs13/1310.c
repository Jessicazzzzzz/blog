#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10
char *s_gets(char *st,int n);
int main(void)
{    FILE *fp;
    char name[SIZE];
    long i;
    long pos;
    int ch;
    printf("please enter the file name:");
    s_gets(name,SIZE);
    if(!(fp=fopen(name,"r")))
    {
        fprintf(stderr,"can not open the %s file.",name);
        exit(EXIT_FAILURE);
    }
    printf("please enter index:");
    while((scanf("%lu",&i)==1) && i>0)
    {
       // pos= (long) i*sizeof(char);
        fseek(fp,i,SEEK_SET);
        while((ch=getc(fp))!='\n')
           putchar(ch);
           putchar('\n');
         printf("please enter index:");  
    }
   if(fclose(fp))
   {
      fprintf(stderr,"error closing the file.");
      exit(EXIT_FAILURE);
   }

}
char *s_gets(char *st,int n)
{
    char *v;
  char *find;
    v=fgets(st,n,stdin);
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