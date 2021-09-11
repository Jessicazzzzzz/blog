#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 4096
#define SLEN 81
char *s_gets(char *st,int n);
void append(FILE *source,FILE *dest);
int main(void)
{
    FILE *fa,*fs;
   char file_app[SLEN];
     char file_src[SLEN];
    int files=0;
  int ch;
   puts("enter name of destination:");
   s_gets(file_app,SLEN); 
    if(!(fa=fopen(file_app,"a+")))
   {
       fprintf(stderr,"cant open %s\n",file_app);
       exit(EXIT_FAILURE);
   }
   if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
   {
       fputs("cant create output buff.\n",stderr);
       exit(EXIT_FAILURE);
   }
     puts("enter the name of first source file(empty line to quit):");
     while (s_gets(file_src,SLEN)&&file_src[0]!='\0')
     {
       

       if(strcmp(file_src,file_app)==0)
       fputs("cannot append file to itself.\n",stderr);
       else if(!(fs=fopen(file_src,"r")))
         fprintf(stderr,"can not open the %s file.\n",file_src);
        else
        {
            if(setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0)
            {fputs("cant create input buff.\n",stderr);
             continue;
             }
             append(fs,fa);
             if(ferror(fs)!=0)
             fprintf(stderr,"error in reading file %s.\n",file_src);
             if(ferror(fa)!=0)
             fprintf(stderr,"error in reading file %s.\n",file_app);
             fclose(fs);
             files++;
             printf("file %s appended.\n",file_src);
             puts("next file (empty line to quit):");
        }

   }
   printf("done appending.%d files appended.\n",files);
rewind(fa);
printf( "%s  contents:\n",file_app);
while((ch=getc(fa))!=EOF)
{
    putchar(ch);
}
puts("done display.\n");
fclose(fa);
return 0;

}
void append(FILE *source,FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];
    while((bytes=fread(temp,sizeof(char),BUFSIZE,source))>0)
      fwrite(temp,sizeof(char),bytes,dest);
}
char *s_gets(char *st,int n)
{
    char *v;
    char *find;
    v=fgets(st,n,stdin);
    if(v)
    {
        find=strchr(st,'\n');
        if(find)
         *find = '\0';
         else
         while(getchar()!='\n')
          continue;
    }
    return v;
}