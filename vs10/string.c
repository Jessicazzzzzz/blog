#include<stdio.h>
#include<string.h>
int main(void)
{
   char  a[25]="jessica like programing.", b[26];
   int i;
   printf("the string a is :%s\n",a); 
   for (i=0; *(a+i) != '\0';i++)
      *(b+i) = *(a+i);
      *(b+i) = '\0';
  
  printf("the string b is :%s\n",b);
   
  printf("%lu\n",strlen(a));
  printf("%lu\n",strlen(b));
  printf("the string b is :");
 
  for (i=0; b[i]!='\0';i++)
    printf("%c",b[i]);



}