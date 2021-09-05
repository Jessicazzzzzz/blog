#include <stdio.h>
#include <ctype.h>
#if (0)
int main(void)
{
    char c[26];
    int read;

    puts("please enter 26 characters:");

    for (int i = 0; i < 26; i++)
    {
        read = scanf("%c", &c[i]);

        while ((read == 1) && !isspace(c[i]) && (i >= 0 || i < 26))
        {
            c[i] = tolower(c[i]);
            printf("%-d:%-3c", i, c[i]);
            read = scanf("%c", &c[i]);
        }
    }
}
#endif

#if (0)
int main(void)
{
    int r, c;
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c <= r; c++)
        {
            printf("$");
        }
        putchar('\n');
    }
}
#endif
#if (0)
int main(void)
{

    char c1, c2;
    for (c1 = 'F'; c1 - 'A' >= 0; c1--)
    {
        for (c2 = 'F'; c2 >= c1; c2--)
        {
            printf("%c", c2);
        }
        putchar('\n');
    }
    return 0;
}
#endif
#if (0)
int main(void)
{
    char ch = 'A';
    int j;
    for (int i = 0; i < 6; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }
}
#endif
#if (0)
void space(int n);
int main(void)
{
    char ch;
    int read;
    char c1, c2;

    do
    {
        printf("please enter a uppercase letter:");
        read = scanf("%c", &ch);
        while (getchar() != '\n')
            ;

    } while (read != 1 || ch < 'A' || ch > 'Z');
    for (c1 = 'A'; c1 <= ch; c1++)

    {
        space(ch - c1);

        for (c2 = 'A'; c2 < c1; c2++)
        {
            printf("%c", c2);
        }
        for (; 'A' <= c2; c2--)
        {
            printf("%c", c2);
        }

        putchar('\n');
    }
}

void space(int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" ");
}

#endif
#if (0)
#include <stdio.h>

void print_spaces(unsigned int n);

int main(void)
{
    char uppercase_letter;
    char c1, c2;

    do // get uppercase letter from user
    {
        printf("Enter an uppercase letter: ");
        scanf(" %c", &uppercase_letter);
    } while (uppercase_letter < 'A' || 'Z' < uppercase_letter);

    for (c1 = 'A'; c1 <= uppercase_letter; c1++)
    {
        // print opening spaces
        print_spaces(uppercase_letter - c1);

        // print letters
        // ascending
        for (c2 = 'A'; c2 < c1; c2++)
        {
            printf("%c", c2);
        }
        // descending
        for (; 'A' <= c2; c2--)
        {
            printf("%c", c2);
        }

        // print closing spaces
        print_spaces(uppercase_letter - c1);
        printf("\n");
    }

    return 0;
}

void print_spaces(unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
#endif
#if (0)
int square(int n);
int cube(int n);
int main(void)
{
    int lower_limit, upper_limit, s, c;
    puts("please enter two numbers for (lower_limit < upper_limit)");
    puts("(q to quit):");
    while (scanf("%d%d", &lower_limit, &upper_limit) != 2 || lower_limit > upper_limit)
    {
        while (getchar() != '\n')
            ;
        puts("please enter valid numbers(lower<upper):");
    }
    puts("integer**********square**************cube");
#if (0)
    for (int i = lower_limit; i <= upper_limit; i++)
    {
        s = square(i);
        c = cube(i);
        printf("%d%10d%10d\n", i, s, c);
    }
#endif
    while (lower_limit <= upper_limit)
    {
        int i = lower_limit;
        s = square(i);
        c = cube(i);
        printf("%d%20d%20d\n", i, s, c);
        lower_limit++;
    }

    return 0;
}
int square(int n)
{
    return n * n;
}
int cube(int n)
{
    return n * n * n;
}
#endif
#include <string.h>
#if(0)
int main(void)
{
    char ch[10];
    int i;
    puts("please enter a sentence:");

    scanf("%s", ch);

    printf("%s\n", ch);

    printf("the reversed array :");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", ch[strlen(ch) - 1 - i]);
    }
}
#endif
#if(0)
int main(void)
{
    char ch[10],temp;
    int i,j,m,n;
    i=0;
    //n=10;
    m =9/2;
    puts("please enter a sentence:");
     
    while(scanf("%c", &ch[i]) && ch[i] !='\n')
           i++;

    printf("the reversed array :");
 
    
    for(i=0,j=9;i<j;i++,j--)
    {    // j=n-1-i;
          temp=ch[i];
          ch[i]= ch[j];
          ch[j]=temp;
         
      

    }
    for(int i=0;i<10;i++)
    printf("%c",ch[i]);
}
#endif
#if(0)
int main(void)
{
    char ch[10],temp;
    int i,j,m,n;
    i=0;
    //n=10;
    m =9/2;
    puts("please enter a sentence:");
     for(i=0;i<10;i++)
    {scanf("%c", &ch[i]);
      if(ch[i] =='\n')
        break;

    }
   ch[9]='\0';
    

    printf("the reversed array :");
 
    
    for(i=0,j=strlen(ch)-1;i<j;i++,j--)
    {    // j=n-1-i;
          temp=ch[i];
          ch[i]= ch[j];
          ch[j]=temp;
         
      

    }
    for(int i=0;i<10;i++)
    printf("%c",ch[i]);
}
#endif
#if(0)
int main(void)
{
    float a,b;
    puts("please enter two floating_point numbers:");
    while(scanf("%f%f",&a,&b) ==2)
    {
        printf("(%.2f-%.2f)/(%.2f*%.2f)=%.2f \n",a,b,a,b,(a-b)/(a*b));
        puts("please enter two floating_point numbers:");
    }
    puts("bye");
    return 0;
}

float cal(float a,float b);
int main(void)
{
    float a,b;
    puts("please enter two floating_point numbers:");
    while(scanf("%f%f",&a,&b) ==2)
    {   
        printf("(%.2f-%.2f)/(%.2f*%.2f)=%.2f \n",a,b,a,b,cal(a,b));
        puts("please enter two floating_point numbers:");
    }
    puts("bye");
    return 0;
}
float cal(float a,float b)
{
    float n;
    n = (a-b)/(a*b);
    return n;
}
#endif
#if(0)
int main(void)
{
    int low,upper,sum=0;
    puts("enter lower and upper integer limits:");
    while(scanf("%d%d",&low,&upper)==2 && (low <upper))
    {
        for (int i= low;i<=upper;i++)
        {   
            sum += i*i;
           
        }
        printf("the sums of the squares from %d to %d is %d\n",low*low,upper*upper,sum);
        puts("enter lower and upper integer limits:");
    } puts("done");
    return 0;
  
}
#endif
#if(1)
int main(void)
{
    int i;
    int array[8];
    printf("please enter 8 digitals:");

    for (i=0;i<8;i++)
    {
        scanf("%d",&array[i]);
         printf("%d",array[i]);
    }
    putchar('\n');
    for (;i>0;i--)
    {
        printf("%d",array[i-1]);
    }
    
}
#endif
#if(0)
int main(void)
{   float n;
   
      int limit;
float sum1=0,sum2=0;
  puts("please enter a number to limit:");
  while( scanf("%d",&limit)==1 && limit>0)
  {     
    

  
  for(int a =1;a<=limit;a++)
  {
      sum1 += 1.0/ a;
           if(a%2==0)
            n = -1.0/a;
            else 
            n = 1.0/a;
            sum2 += n;


  }
  
  printf("the sum of first array is %.2f\n",sum1);
   printf("the sum of second array is %.2f\n",sum2);

  puts("please enter a valid number to limit:");
  }

return 0;

}
#endif
#if(0)
int main(void)
{
    int array[8],i;
    array[0]=1;
    for (i =0;i<7;i++)
    {    
        array[i+1]  += 2 *array[i];
    }
   /* for (i=0;i<8;i++)
  {
       
      printf("%5d",array[i]);
  }*/
 i=0;
do 
  {   
      printf("%5d",array[i]);
      i++;

  }while(i<8);

}
#endif
#if(0)
int main(void)
{
     double a1[8];
     double a2[8];
     double sum=0;
     int i;
     printf("please enter 8  floating numbers:");
     for (i=0;i<8;i++)
     {
         scanf("%lf",&a1[i]);
     }
     for(i=0;i<8;i++)
     {
         sum +=a1[i] ;
         a2[i] = sum;
         printf("%6.2lf",a2[i]);
     }
    return 0;

}
#endif
#if(0)
#define INDEX 10
int main(void)
{
char ch[INDEX];
int i=0;

printf("please enter a sentence :");
while(scanf("%c",&ch[i]) ,ch[i] !='\n')
 i++;
 for(;i>=0;i--)
 {
     printf("%c",ch[i]);
 }
 return 0;
}
#endif