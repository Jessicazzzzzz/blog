#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
   
    int i;
    if(argc==1)
    {
        printf("usage:filename%s",argv[0]);
        exit(EXIT_FAILURE);

    }
    else if(argc==2)
    {      int count=0;
        fp= stdin;
        printf("please enter some sentence:(#to quit)");
        while((ch=getc(fp))!='#')
        {
            if (ch==argv[1][0])
              count++;
        }
        if( fclose(fp)!=0)
            {
                fprintf(stderr,"error closing file.\n");
                exit(EXIT_FAILURE);
            }
    }
    else 
    {
         for(i=2;i<argc;i++)
         {    int count=0;
            if (!(fp=fopen(argv[i],"r")))
            {
                fprintf(stderr,"cant not open the file%s.",argv[i]);
                 exit(EXIT_FAILURE);
            }
            if(ferror(fp)!=0)
            { fprintf(stderr,"cant not reading the file%s.",argv[i]);
                 exit(EXIT_FAILURE);

            }
            while((ch=getc(fp))!=EOF)
            {
                if(ch==argv[1][0])
                  count++;
            }
            printf("The character %c has appeared in file %s for %d times \n",argv[1][0],argv[i],count);

            if( fclose(fp)!=0)
            {
                fprintf(stderr,"error closing file.\n");
                exit(EXIT_FAILURE);
            }
         }
    }
    
    
}