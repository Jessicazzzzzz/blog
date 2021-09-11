#if (0)
#include <unistd.h>
#include <stdio.h>
void to_binary(unsigned long n);

int main(void)
{
  unsigned long number;
  printf("enter an integer (q to quit):\n");
  while (scanf("%lu", &number) == 1)

  {
    printf("binary equivalent:");

    to_binary(number);
    putchar('\n');
    printf("Enter an integer (q to quit):\n");
  }
  printf("Done.\n");
}
void to_binary(unsigned long n)
{
  unsigned long m;
  m = n % 2;
  if (n >= 2)
    to_binary(n / 2);
  //printf("%lu",m);
  putchar(m == 0 ? '0' : '1');
  return;
}
#endif
#if (0)
#include <stdio.h>
#include <stdbool.h>
int sqr(int n);
int number(void);
int main(void)
{
  int n, answer;
  printf("please enter your number:");
  n = number();
  answer = sqr(n);
  if (answer < 0)
  {
    printf("error:the sqr is%d", answer);
  }
  else
    printf("the number%d sqr root is %d", n, answer);
}
int number(void)
{
  int n;
  while (scanf("%d", &n) != 1 || n < 0)
  {
    while (getchar() != '\n')
      ;
    printf("please enter valid numbr:");
  }
  return n;
}
int sqr(int n)
{
  bool flag = false;
  int d = 2, root;
  while (d < n)
  {
    if ((d * d == n) && (n % d == 0))
    {
      flag = true;
      root = d;
    }

    d++;
  }
  if (!flag)
    return -1;
  else
    return root;
}
#endif
#if (0)
#include <stdio.h>
#include <ctype.h>
void count();

int main(void)
{
  char ch;

  printf("please enter sentences to test:");
  count();
}

void count()
{
  char ch;
  int s_c, n_c, o_c;
  s_c = n_c = o_c = 0;
  int blank[10], num[10], other[10];
  while ((ch = getchar()) != '\n')
  {
    if (isspace(ch))
    {
      s_c++;
      blank[s_c - 1] = ch;
      if (ch == ' ')
        printf("blank[%d]=' '\n", s_c - 1);
    }
    else if (isnumber(ch))
    {
      n_c++;
      num[n_c - 1] = ch;
      printf("num[%d]=%c\n", n_c - 1, ch);
    }
    else
    {
      o_c++;
      other[o_c - 1] = ch;
      printf("other[%d]%c\n", o_c - 1, ch);
    }
  }

  printf("the space =%d,the number=%d,the others=%d", s_c, n_c, o_c);
}
#endif
#if(0)
#include <stdio.h>
int square(int a);
int f(int n);
int main(void)
{
  int a, b, sqa, sqb;
  int sum = 0;
  char ch;
  printf("please enter two integers:");
  while (scanf("%d%d", &a, &b) == 2)
  {
    sqa = square(a);
    sqb = square(b);

    printf("sum=%d\n", sqa + sqb);
    printf("please enter another two integers:");
  }
  printf("bye");
}
int square(int a)
{
  int sqr;
  sqr = a * a;

  return f(sqr);
}
int f(int n)
{
  int result;
  if (n> 0)
   
 result = n * f(n - 1);
  else
    result = 1;

  return result;
}
#endif
#if(0)
//hanoi probelm
#include<stdio.h>
void move (char x,char y);
void hanoi(int n,char one,char two,char three);
int  main(void)
{  int n;
printf("please enter input:");
scanf("%d",&n);
printf("the steps of moving disks %d\n",n);
hanoi( n,'A', 'B','C');

}
void hanoi(int n,char one,char two,char three)
{ 
  if(n==1)
  move(one,three);
  else
  {hanoi(n-1,one ,three ,two);
   move(one,three);
   hanoi(n-1,two,one ,three);

  }
}
void move (char x,char y)
{
  printf("%c-->%c\n",x,y);
}
#endif
#if(0)
#include<stdio.h>
float average(float a[]);
int main(void)
{
     float score[10],avge;
     printf("please enter 10 students scores:");
     for (int i=0;i<10;i++)
     {
       scanf("%f",&score[i]);

     }
  avge=average(score);
  printf("the average of the scores are:%.2f",avge);

}
float average(float a[])
{
    float sum =0;
    int i;
    for(i =0;i<10;i++)
    {
      sum += a[i];
    }
    return sum/i;
    }
    #endif
  
  

