#include<stdlib.h>
#include<stdio.h>
#define LEN 20
int main(void)
{
    FILE *fp;
    char buff[LEN];
    char ch;
    if(!(fp=fopen("eddy","a+")))
    {
        
        fprintf(stderr,"can not open the file");
        exit(EXIT_FAILURE);
    }
    printf("please enter some string:");
    fgets(buff,LEN,stdin);
    fputs(buff,fp);
    rewind(fp);
    #if(0)
    while(fscanf(fp,"%s",buff)==1)
    puts(buff);
    #endif
  #if(0)
    while ((ch=fgetc(fp))!=EOF)
   {  
       putchar(ch);
   } 
   #endif
   #if(0)//最后是xxf,所以会有？出现，不能用这种
   while(!(feof(fp)))
   {
       ch=fgetc(fp);
       putchar(ch);
   }
   #endif
    puts("done!");
    if(fclose(fp)!=0)
     fprintf(stderr,"error colsing file.\n");
      return 0;

}