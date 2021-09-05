#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double difference(double *a, int n);
#define SIZE 10
int main(void)
{  double test[SIZE];
   srand(time(NULL));
   for (int i=0;i<SIZE;i++)
     test[i] = rand()/(double)RAND_MAX;
    printf("the array is:");
     for (int i=0;i<SIZE;i++)
     printf("%8.2lf",test[i]); 
    
    printf("the difference between max and min is %.2f",difference(test,SIZE));
}
double difference(double *a, int n)
{   
   
    #if(1)
    double max=*a;
    double min=*a;
    
    for (int i = 1;i<n;i++)
    {
        if (max<*(a+i))
          max=*(a+i);
          if (min>*(a+i))
          min = *(a+i);

    }
    #endif
   


}