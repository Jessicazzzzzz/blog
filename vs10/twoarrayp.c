#include<stdio.h>
int main(void)
{   int (*p)[4];
   int i,j;
    int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
    p = a;
  /* for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
         printf(" %d",*(*(p+i)+j));
    }
*/
    printf(" %p %d\n", *p+1,*(*p+1));
    printf(" %p %d\n", *p+2,*(*p+2));printf(" %p %d\n", *p+3,*(*p+3));
    printf("%p %d\n",*(p+1),**(p+1));


}