#include<stdbool.h>
#include <stdio.h>
#include <ctype.h>

#if(0)
int main(void)
{  char ch;
   int count=0;
   bool inword= false;
   puts("please enter some words(# to quit):");
   while((ch=getchar())!='#')
   {
       if(ch=='e')
         inword= true;
         else if(ch=='i' && inword)
           {
               count++;
               inword = false;

           }
           else 
             inword=false;
printf("the words occurs%d",count);
   }printf("the words occurs%d",count);

    
}
#endif
int main(void)
{   char ch;
   bool word=false;
   printf("please enter your words:");
   while((ch=getchar())!='\n')
    {
        if(isalpha(ch))
         word=true;
         if (ch==' ')
           {
               if(word)
                 break;
                 else
                  continue;
                 
           }
  printf("%c",ch);
    }
   




}