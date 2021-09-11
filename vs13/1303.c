#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
char *s_gets(char *st,int n);
#define SIZE 20
int main(void)
{
    char name[SIZE];
   
   FILE *fp;
    char ch;
    long count,last;
    fpos_t position;
    printf("please enter the file name:");
    s_gets(name,SIZE);
    if(!(fp=fopen(name,"a+")))
        {
            fprintf(stderr,"can not open the file.\n");
            exit(EXIT_FAILURE);
        }
     printf("please enter some string:\n");
   
     while((ch=getchar())!='#')
     {
         ch=toupper(ch);
         fputc(ch,fp);
     } //rewind(fp);这个是错误的，因为它定位在开始，那么last就是从开始到开始
   // fseek(fp,0L,SEEK_END);(不加这个也是可以的，因为它本身已经到结尾了)
    
      last =ftell(fp);
    for(count=0L;count<=last;count++)
    {
        fseek(fp,count,SEEK_SET);
        ch=getc(fp);
        if(ch!=EOF )
             putchar(ch);

    }
    
    putchar('\n');
     rewind(fp);
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);
    }
    
    fclose(fp);
    return 0;

}
char *s_gets(char *st,int n)
{
    char *v;
    v=fgets(st,n,stdin);
    if(v)
    {
        while(*st!='\n'&&*st!='\0')
           st++;
           if(*st=='\n')
           *st='\0';
           else 
           while(getchar()!='\n')
              continue;

    }
    return v;
}