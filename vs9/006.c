/***************************************************************************
 * write and test a function that takes the addresses of thress double 
 * variables as arguments and that moves the values of the smallest into 
 * the first variables,the middle value to the second variables
 * and the largest value into the third variable.
 * ***************************************************************************/
#include<stdio.h>
void arrage(int *a,int *b,int *c);
int main(void)
{    int x,y,z;
    int small,middle,large;
    printf("please enter three numbers(q to quit):");
    while(scanf("%d%d%d",&x,&y,&z)==3)
    {   
         arrage(&x,&y,&z);
         printf("please enter three numbers:");
    }
}
void arrage(int *a,int *b,int *c)
{
     int small,middle,large;
     large = *a>*b?*a:*b;
     small = (*a +*b)-large;
     if (*c>large)
     {
         printf("%d%d%d\n",small,large,*c);
     }
     else if(*c<large &&*c>small)
     {
         printf("%d%d%d\n",small,*c,large);
     }
     else 
     {
           printf("%d%d%d\n",*c,small,large);
     }




}