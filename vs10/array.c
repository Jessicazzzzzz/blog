#include<stdio.h>
int main (void)
{  
    int array[10] = {9,8,7,6,5,4,3,2,1,0};
    int *p ,i;
    p= array;
    printf("way1:\n");
    for (i=0;i<10;i++)
    
        printf("%4d", *(p+i));
        printf("\n");
        printf("way2:\n");
          for (i=0;i<10;i++)
        printf("%4d",array[i]);
         printf("\n");
         printf("way3:\n");
          for (i=0;i<10;i++)
        printf("%4d",*(array+i));
    
     
     return 0;


}