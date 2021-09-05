#if(0)
#include <stdio.h>

#define SIZE 10
char *get(char *st,int n);
void reverse(char *st,int n);
int main (void)
{
   char st[SIZE];
   puts("enter a string:");
   get(st,SIZE);
   while(*st)
   {
       reverse(st,SIZE);
       
         puts("enter a string:");
   get(st,SIZE);
   }


}
char *get(char *st,int n)
{   char *vet_val ;
     vet_val = fgets(st,n,stdin);
     if(vet_val)
     {
         while(*st !='\n'&& *st !='\0')
           st++;
           if (*st=='\n' )
            *st = '\0';
            else
             while(getchar() !='\n')
              continue;

     }
      return vet_val;
}
void reverse(char *st,int n)
{
    int start,end ,middle;
    char temp;
    middle= (n-1)/2;
    //把它一分为二
    for(start =0,end = n-1; start<= middle; start++,end--)
       {
             temp = *(st+start);
             *(st + start ) = *(st + end);
             *(st +end) = temp;

       }
    for (int i=0;i<n;i++)
    printf("%c",*(st+i));
      printf("\n");
}
#endif
#include<stdio.h>
#include<string.h>
#define SIZE 10
char *s_get(char *ch,int n);
void  reverse(char *ch,int n);

int main(void)
{     char str1[SIZE];
    printf("please enter  string:");
    s_get(str1,SIZE);
    puts(str1);
    printf("%lu\n",strlen(str1));
    //reverse(str1,SIZE-1);
    reverse(str1,strlen(str1));
    puts(str1);
    printf("%s\n",str1);

   // puts(str1);(这种方法倒过来第一个为0，所以它打印不出来)
     for (int i=0;i<SIZE;i++)
    printf("%c",*(str1+i));

}
char *s_get(char *ch,int n)
{     char *v;
   v= fgets(ch,n,stdin);
   if(v)
   {
       while(*ch !='\n'&&*ch!='\0')
             ch++;
             if(*ch=='\n')
                *ch='\0';
                else 
                 while(getchar()!='\n')
                    continue;

   }
   return v;
}
void reverse(char *ch,int n)
{    int start,end ,middle;
     char temp;
     //字符串数组必须确定它的长度，因为它的倒序如果开始为0的话，那就打印不出来
     //只能通过打印%c来实现。
     start =0;
     end = n-1;
  // middle=n/2;
     while(start<end)
     {   temp= ch[start];
        ch[start]= ch[end];
         ch[end]= temp;
         start++;
         end--;
         


     }
    
    

    


}