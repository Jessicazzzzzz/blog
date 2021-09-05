#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
char *s_gets(char *st,int n);

int main(void)
{
    FILE *in,*out;
    int ch;
    char fpin[LEN];
    char fptout[LEN];
    int count=0;
    printf("please enter the file name:");
   s_gets(fpin,LEN);
   if(!(in=fopen(fpin,"r")))
{
    fprintf(stderr,"cannot open the file %s.",fpin);
    exit(EXIT_FAILURE);

}
strncpy(fptout,fpin,LEN-5);
fptout[LEN-5]='\0';
strcat(fptout,".red");
if(!(out=fopen(fptout,"w")))
{  fprintf(stderr,"can not create output file.\n");
   exit(3);//exit 如果读取成功返回值为0，读取异常就返回非0值；

}
while((ch=getc(in))!=EOF)
{
    if(count++%3==0)
      putc(ch,out);
}
if(fclose(in)!=0 ||fclose(out)!=0) 
{
    fprintf(stderr,"error in closing file.\n");
}
return 0;
}
char *s_gets(char *st,int n)
{
    char *v;
    char *find;

    v=fgets(st,n,stdin);
    
    if(v)
    {   find=strchr(st,'\n');
        if(find)
         *find='\0';
         else 
         while(getchar()!='\n')
          continue;
    }
    return v;
}