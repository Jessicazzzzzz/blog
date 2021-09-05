#include<stdio.h>

void critic(int *n);
int main(void)
{
    int units;
    printf("how many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while(units!=56)
      critic(&units);
      printf("you must have looked it up\n");
      return 0;

}
void critic(int *n)
{
    printf("no luck,my friend .try again.");
    scanf("%d",n);
}