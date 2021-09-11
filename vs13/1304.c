#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{  FILE *fp1;
   FILE *fp2;
    int i;
    char ch;

    if(argc<2)
{  printf("usage:%sfilename.",argv[0]);
     exit(EXIT_FAILURE);

}


   if(!(fp1=fopen(argv[1],"r"))||!(fp2=fopen(argv[2],"r")))
   {
       fprintf(stderr,"cant open the file.\n");
       exit(EXIT_FAILURE);
   }
   printf("the file \"%s\" contests:\n",argv[1]);
   while((ch=getc(fp1))!=EOF)
   {
       putc(ch,stdout);
   }
   putchar('\n');
    printf("the file\"%s\" contests:\n",argv[2]);
    while((ch=getc(fp2))!=EOF)
   {
       putc(ch,stdout);
   }

fclose(fp1);
fclose(fp2);
return 0;


}