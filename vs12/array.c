#include<stdio.h>
#include <stdbool.h>
#define SIZE 10
int main(void)
{
    int a[SIZE]={1,2,3,4,5,6,7,8,9,10};
    int n,low,mid,high,read;
    bool found = false;
    low = 0;
    high = SIZE -1;
    puts("please enter an number:");
    read = scanf("%d",&n);
    while((read!=1) || n<a[0] || n>a[SIZE-1])
   {    while(getchar()!='\n')
             continue;
       puts("please enter a valid number:");
       read= scanf("%d",&n);
   }
 if (read ==1)
   { while(low<=high)
    {  mid = (low+high)/2;
      if(n==a[mid])
      {
          found = true;
          break;
      }
      else if (n <a[mid])
      {
          high = mid -1;
      }
      else 
      {
          low = mid +1;
      }

    }
   }
  if (found)
  {
     printf("the number %d at array %d",n,mid );
  }


}