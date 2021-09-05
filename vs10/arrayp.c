#include<stdio.h>
int main (void)
{
    int array[10];
    int *p;
    int i;
    p=array;
    printf("enter ten integers for array:");
    for(i=0;i<10;i++)
    scanf("%d",p++);
    printf("the array are:");
   for (p = array;p<(array+10);)
      printf("%2d",*(p++));
     
     /* for (i=0,p=array;i<10;i++)
       printf("%d",*(p++)); */
      return 0;

}