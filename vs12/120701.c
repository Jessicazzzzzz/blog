#include"diceroll.h"
#include<stdio.h>
#include<stdlib.h>
static int rollem(int sides)
{
    int roll;
    roll = rand()%sides+1;
    return roll;
}
int roll_n_dice(int dice ,int sides)
{
    int d;
    int total=0;
    
    for (d=0;d<dice;d++)
    total+=rollem(sides);
    return total;
}