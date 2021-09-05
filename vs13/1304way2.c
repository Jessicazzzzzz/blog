/*********************
 * 这个程序是1304的精简版
 * ******************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    FILE *fp;
    
    char ch;
    if(argc<2)
    {
        fprintf(stderr,"usage%s filename.",argv[0]);
        exit(EXIT_FAILURE);
    }
    for(int i=1;i<argc;i++)
    {
        if(!(fp=fopen(argv[i],"r")))
          {
              fprintf(stderr,"cant open file.\n");
              exit(EXIT_FAILURE);

          }
          while((ch=getc(fp))!=EOF)
          {
              putc(ch,stdout);
          }
    fclose(fp);
    }
    return 0;
}