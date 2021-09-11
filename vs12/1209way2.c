#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

int main(void)
{
    int n ;
    
   
 
    char **ptd=(char**)malloc(n*sizeof(char *));
   
    printf("how many words do you wish to enter?");
    while(scanf("%d",&n)==1&&n>0)
    {     while(getchar()!='\n');
        printf("enter %d words now:",n);
       for(int i=0;i<n;i++)
       {
           char *word=(char *)malloc(SIZE*sizeof(char*));
          
           scanf("%s",word);
           ptd[i]=word;
 
       }
         while(getchar()!='\n');
         printf("Here are your words:\n");
         for(int j=0;j<n;j++)
    {  puts(ptd[j]);
       
    }
printf("how many words do you wish to enter?");
    }
     
     free(ptd);

     return 0;
}
