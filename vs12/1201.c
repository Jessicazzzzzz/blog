#include <stdio.h>

void critic(int n);
int main(void)
{
    int units;
    printf("how many pounds to a firkin of butter?\n");
    scanf("%d", &units);

    critic(units);
    printf("you must have looked it up!\n");
    return 0;
}
void critic(int n)
{
    while (n != 56)
    {
        printf("No luck,my friend .try again.\n");
        scanf("%d", &n);
    }
}