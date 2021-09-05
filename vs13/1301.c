#include<stdio.h>
#include<stdlib.h>
#define SIZE 40
char *s_gets(char *st,int n);
int main(void)
{
    FILE *fp;
    char name[SIZE];
    char ch;
    unsigned long count =0;
    printf("please enter the file name:");
    //scanf("%s",name);
    s_gets(name,SIZE);
    if(!(fp=fopen(name,"r")))
   {
       printf("can not open the file.");
       exit(EXIT_FAILURE);

   }
   while((ch=getc(fp))!=EOF)
   {
       putc(ch,stdout);
       count++;
   }
 fclose(fp);
 printf("file %s has %lu charcater.",name,count);

}
char *s_gets(char *st,int n)
{
    char *v;
    v=fgets(st,SIZE,stdin);
    if(v)
    {
        while(*st !='\n'&&*st !='\0')
           st++;
           if(*st=='\n')
              *st='\0';
              else
              while(getchar()!='\n')
                 continue;
    }
    return v;
}