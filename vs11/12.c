#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main(void)
{   char ch;
   int upperletter,lowerletter,word,punc,digital;
    upperletter=lowerletter=word=punc=digital=0;
   bool inword = false;
    while((ch= getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            if(!inword)
              {
                 word++;
                 inword = true; 
              } 
              if (isupper(ch))
               upperletter++;
               if (islower(ch))
               lowerletter++;
        }
        else if(ispunct(ch))
          {
              punc++;
              if(ch !='-'&&ch !='\'')
              inword = false;
          }
          else if(isdigit(ch))
          {
              digital++;
              inword =false;
          }
          else if (isspace(ch))
          {
              inword = false;
          }
    }
    printf("number of %s :%d \n","upperletter",upperletter);
    printf("number of %s :%d \n","lowerletter",lowerletter);
    printf("number of %s :%d \n","word",word);
    printf("number of %s :%d \n","punctuation",punc);
     printf("number of %s :%d \n","digital",digital);

     return 0;
}