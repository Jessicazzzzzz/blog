#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source,FILE *dest);
int main(int argc,char *argv[])
{
    FILE *fa,*fs;
    int i;
    int files=0;
  int ch;
    if(argc<2)
    {
        printf("usage:%sfilename.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if(!(fa=fopen(argv[1],"a+")))
   {
       fprintf(stderr,"cant open %s\n",argv[1]);
       exit(EXIT_FAILURE);
   }
   if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
   {
       fputs("cant create output buff.\n",stderr);
       exit(EXIT_FAILURE);
   }
   for(i=2;i<argc;i++)
   {
       if(strcmp(argv[1],argv[i])==0)
       fputs("cannot append file to itself.\n",stderr);
       else if(!(fs=fopen(argv[i],"r")))
         fprintf(stderr,"can not open the %s file.\n",argv[i]);
        else
        {
            if(setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0)
            {fputs("cant create input buff.\n",stderr);
             continue;
             }
             append(fs,fa);
             if(ferror(fs)!=0)
             fprintf(stderr,"error in reading file %s.\n",argv[i]);
             if(ferror(fa)!=0)
             fprintf(stderr,"error in reading file %s.\n",argv[1]);
             fclose(fs);
             files++;
             printf("file %s appended.\n",argv[i]);
        }

   }
   printf("done appending.%d files appended.\n",files);
rewind(fa);
printf( "%s  contents:\n",argv[1]);
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