#include<stdio.h>
void de_string(char str[],char ch)
{  int i,j;
  for(i=0,j=0;str[i]!='\0';i++ )
  {
      if(ch!=str[i])
      {
          str[j++]=str[i];
      }

  }str[j]='\0';


}