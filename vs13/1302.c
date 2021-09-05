#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
int main(int argc,char *argv[])
{  char ch;
    char buff[SIZE];
   FILE *fsource;
   FILE *ftarget;
   if(argc!=3)
   {
       fprintf(stderr,"usage:%s filename.\n",argv[0]);
       exit(EXIT_FAILURE);
    }
  if(!(fsource=fopen(argv[1],"a+")))
  {
      fprintf(stderr,"can not open the file\n");
       exit(EXIT_FAILURE);
  }
  if(!(ftarget=fopen(argv[2],"w")))
  { fprintf(stderr,"can not open the file\n");
       exit(EXIT_FAILURE);

  }
  printf("please enter some string:");
  fgets(buff,SIZE,stdin);
  fputs(buff,fsource);

  
  rewind(fsource);
  while((ch=getc(fsource))!=EOF)
  {
      putc(ch,ftarget);
      putc(ch,stdout);
  }
 
  if(fclose(fsource)!=0 ||fclose(ftarget))
  fprintf(stderr,"error in colsing file.");
  return 0;
}