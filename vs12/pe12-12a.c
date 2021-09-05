#include <stdio.h>
#include "pe12-2a.h"

#define METRIC 0
#define US 1
//这边可以是全局变量，也可以是static变量
int mode;
double distance;
double fuel;

void clear_input_stream(void)
{
	while (getchar() != '\n')
		continue;
}

void set_mode(int new_mode)
{
	if(new_mode==METRIC ||new_mode==US)
	     mode=new_mode;
		 else
		 printf("Invalid mode specified.Mode%d(%s)used.",
		 mode,mode==METRIC?"metric":"us");
}
void get_info(void)
{
	printf("enter distance traveled in %s:",mode==METRIC?"kilometers":"miles");
	while(scanf("%lf",&distance)!=1)
	{
		clear_input_stream();
		printf("enter distance traveled in %s:",mode==METRIC?"kilometers":"liters");
	}
	printf("enter fuel consumed in %s:",mode==METRIC?"liters":"gallons");
	while(scanf("%lf",&fuel)!=1)
	{
		clear_input_stream();
		printf("enter fuel consumed in %s:",mode==METRIC?"liters":"gallons");
	}

}

void show_info(void)
{
	if(mode==METRIC)
	{
		printf("fuel consumption is%.2lf liters per 100 km.\n",fuel/distance*100);
	}
	else if(mode ==US)
	{
		printf("fuel consumption is %.2lf miles per gallon.\n",distance/fuel);
	}

}
	