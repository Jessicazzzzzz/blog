#include<stdio.h>
void change(char from[] ,char to[]);
int main(void)
{
  char a[] = "she is a teacher.";
  char b[] = "she is a student and a girl.";
 
  printf("a is %s,b is %s\n",a,b);
  change (a,b);
  printf("now a is %s,b is %s",a,b);
}
void change(char from[] ,char to[])
{     int i=0;
    
   /*  way 1
   while (from[i] !='\0')
        { to[i] = from[i];
           i++;
        }

         to[i] = '\0';
*/
  /* way 2
  while ((*to = *from )!='\0')
   {
       to++;
       from++;
   }
*/
//way 3
 while ((*to++ = *from++) !='\0');

//while( *to++ = *from++);//会有一点warning
}