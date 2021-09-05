#if(1)
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

#define SIZE 10
char *ch_get(char *array,int n);
int main(void)
{
     char array[SIZE];
     printf("please enter the input:");


      ch_get(array,SIZE-1);
      puts(array);
      printf("%s",array);
      return 0;


}
char *ch_get(char *array,int n)
{
    char ch;
    int i=0;
   bool flag=false;
    while((ch=getchar())!=EOF && i<n )
    {     if(isspace(ch))
              {
                  if(flag)
                    break;
                    else
                     continue;
              }
              if(!flag)
              flag=true;

       array[i]=ch;
        i++;
    }
    while(getchar()!='\n');
   
  
    return array;

}
#endif



	
		
