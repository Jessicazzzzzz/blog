#include<stdio.h>
#include<math.h>
int main(void)
{float a,b,c ,s,area;
 scanf("%f%f%f",&a,&b,&c);
 s= (a+b+c)/2.;
 area = sqrt(s*(s-a)*(s-b)*(s-c));
 printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f,area=%7.2f",a,b,c,s,area);


}