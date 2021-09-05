#include<stdio.h>
void set_mode(int *);
void get_info(int );
void show_info(int ,double ,double );
void clear_input_stream();
#define METRIC 0
#define US 1
int main(void)
{    int mode ;
printf("enter 0 for metric mode,1 for US mode:");
scanf("%d",&mode);
while(mode>=0)
{
    set_mode(&mode);
    
    
    printf("enter 0 for metric mode,1 for US mode:");
    printf("(-1 to quit):");
    scanf("%d",&mode);
}
  printf("done.\n");
  return 0;

}
void clear_input_stream()
{
    while(getchar()!='\n')
      continue;
}
void set_mode(int *new_mode)
{   static int mode;
	if(*new_mode==METRIC ||*new_mode==US)
	     mode=*new_mode;
		 else
		 printf("Invalid mode specified.Mode%d(%s)used.",
		 mode,mode==METRIC?"metric":"us");

		 get_info(mode);
}
void get_info(int mode)
{    double distance,fuel;
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
    show_info(mode,fuel,distance);

}

void show_info(int mode,double fuel,double distance)
{   
	if(mode==METRIC)
	{
		printf("fuel consumption is%.2lf liters per 100 km.\n",fuel/distance*100);
	}
	else if( mode ==US)
	{
		printf("fuel consumption is %.2lf miles per gallon.\n",distance/fuel);
	}

}
	