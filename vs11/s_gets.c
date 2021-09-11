#include<stdio.h>
#include<string.h>
char *s_gets(char *st,int n);

#define STLEN 10

int main(void)
{
     char words[STLEN];
     puts("enter your string:");
     s_gets(words, STLEN);
     puts(words);
    return 0;

}
#if(0)
//用数组去循环
char *s_gets(char *st,int n)
{    char *ret_val;
    int i=0;
    ret_val = fgets(st,n,stdin);
    if (ret_val)//表示 ret_val !=null
      {
         while(st[i] !='\n'  && st[i]  != '\0')
            i++;
            if (st[i] == '\n')
              st[i] = '\0';
              else 
                while(getchar() != '\n')
                continue;
                

      }

return ret_val;

}
#endif
#if (0)
定义一个strchr去找‘\n'
char *s_gets( char *st,int n)
{
  char *find;
  char *vet_val;
   vet_val =fgets(st,n,stdin);
   if(vet_val)
  {
    find = strchr(st,'\n');
  if(find)
      *find = '\0';
      else 
       while(getchar() != '\n')
        continue;
  } 
    
    return vet_val;
}
#endif
//定义一个指针去循环字符串shuzu
char *s_gets(char *st,int n)
{
   char *vet_val;
   vet_val = fgets(st,n,stdin);
   if(vet_val)
   {while (*st !='\n' && *st !='\0')
      st++;
      if(*st == '\n')
       *st = '\0';
       else 
       while(getchar() != '\n')
         continue;
    }
    return vet_val;
   



}