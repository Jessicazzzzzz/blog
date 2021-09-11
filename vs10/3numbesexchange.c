#include<stdio.h>
int max(int,int);

int main(void)
{  int a ,b , c;
   int j,k;
   printf("please enter 3 integers:");
   scanf("%d%d%d",&a,&b,&c);
   j = max(a,b);
   k = a+b-j;
   if (c > j )
    printf("%d>%d>%d",c,j,k);
    else if(c<j)
    {
        if (c>k)
        printf("%d%d%d",j,c,k);
        else
        printf("%d%d%d",j,k,c);
    }
    
   return 0;

}
int max(int a,int b)
{
    return a>b?a:b;
}
   
   