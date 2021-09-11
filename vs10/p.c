#if (0)
#include <stdio.h>
void copy_arr(double t[], double s[], int n);
void copy_ptr(double *p, double *q, int n);
void copy_ptrs(double *p, double *start, double *end);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    printf("the target1:");
    copy_arr(target1, source, 5);
    printf("\nthe target2:");
    copy_ptr(target2, source, 5);
    printf("\nthe target3:");
    copy_ptrs(target3, source, source + 5);
}
void copy_arr(double t[], double s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        t[i] = s[i];
        printf("%4.1lf", t[i]);
    }
}
void copy_ptr(double *p, double *q, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(p + i) = *(q + i);
        printf("%4.1lf", *(p + i));
    }
}
void copy_ptrs(double *p, double *start, double *end)
{
    p = start;
    while (start < end)
    {

        start++;
        printf("%4.1lf", *p++);
    }
}
#endif
#if (0)
#include <stdio.h>
#define SIZE 10
int largest(int *p, int n);
int main(void)
{
    int a[SIZE];
    int i, max;
    printf("please enter 10 integers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = largest(a, SIZE);
    printf("the max of array:%d", max);
    return 0;
}
int largest(int *p, int n)
{
    int i, max;
    max = *p;
    for (i = 0; i < n - 1; i++)
    {
        if (max < *(p + 1))
            max = *(p + 1);
        p++;
    }
    return max;
}
#endif
#if (0)
#include <stdio.h>
#define SIZE 6
double difference(double *p, int n);
int main(void)
{
    double array[SIZE];
    int i;

    printf("please enter 6 floating numbers:");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%lf", &array[i]);
    }
    difference(array, SIZE);
    printf("the difference between largest and smallest numberis%.2lf",
           difference(array, SIZE));
    return 0;
}
double difference(double *p, int n)
{
    double max, min;
    int i;
    max = min = *p;
    for (i = 0; i < n - 1; i++)
    {
        if (max < *(p + 1))
            max = *(p + 1);
        else if (min > *(p + 1))
            min = *(p + 1);
        p++;
    }

    return max - min;
}
#endif
#if (0)
#include <stdio.h>
#define SIZE 6
void reverse(double *p, int n);
int main(void)
{
    double a[SIZE];
    int i;
    printf("please enter 6 float number :");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%lf", &a[i]);
    }
    reverse(a, SIZE);
    printf("after reversing:");
    for (i = 0; i < SIZE; i++)
        printf("%4.1lf", a[i]);
}
void reverse(double *p, int n)
{
    int start, mid, end;
    //double *p;
    //p=a;
    start = 0;
    end = n - 1;
    mid = (n - 1) / 2;

    double temp;

    while (start <= mid) //关于reverse，设一个中间的数
    {
        temp = *(p + start);
        *(p + start) = *(p + end);
        *(p + end) = temp;
        start++;
        end--;
    }
    /*
    while(start<=mid)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
        
    }
*/
}
#endif
#if (0)
//把第一数组拷贝到第二个数组中去
#include <stdio.h>
void copy_a(double (*t)[3], double (*s)[3], int r);
int main(void)
{
    double array1[2][3] = {{1.3, 24, 3.5}, {4, 5, 6}};
    double array2[2][3];
    int i, j;
    copy_a(array2, array1, 2);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%6.1lf", array2[i][j]);
    }
}
void copy_a(double (*t)[3], double (*s)[3], int r) //注意双重数组的命名
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(t + i) + j) = *(*(s + i) + j);
        }
    }
}
#endif
#if (0)
//把数组中后三个数拷贝到第二个数组中去
#include <stdio.h>

void copy_p(double *t, double *s, int n, int m);
int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3];
    int i;
    copy_p(target, source, 3, (7 - 3));
    for (i = 0; i < 3; i++)
        printf("%6.1lf", target[i]);
    return 0;
}
void copy_p(double *t, double *s, int n, int m)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(t + i) = *(s + m); //source 数组的指针从第四个开始到结尾，迭代次数是一样的
        m++;
    }
}
#endif
#if (0)
#include <stdio.h>
void copy_a(int r, int c, int target[*][*], int source[*][*]);
void print_a(int r, int c, int s[*][*]);
int main(void)
{
    int array[3][5] = {{1, 2, 3, 4, 5}, {1, 2, 33, 4, 5}, {1, 22, 3, 4, 5}};
    int array2[3][5];
    copy_a(3, 5, array2, array);
    print_a(3, 5, array2);
    return 0;
}
void copy_a(int r, int c, int target[r][c], int source[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            *(*(target + i) + j) = *(*(source + i) + j);
        }
    }
}
void print_a(int r, int c, int s[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%3d", s[i][j]);
        }
        putchar('\n');
    }
}
#endif
#if (0)
#include <stdio.h>
void sum_a(int *target, int *source1, int *source2, int n);
int main(void)
{
    int a1[4] = {2, 4, 5, 8};
    int a2[4] = {1, 0, 4, 6};
    int a3[4];
    sum_a(a3, a1, a2, 4);
    printf("the a3[4]:");
    for (int i = 0; i < 4; i++)
    {
        printf("%4d", a3[i]);
    }
}
void sum_a(int *target, int *source1, int *source2, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(target + i) = *(source1 + i) + *(source2 + i);
    }
}
#endif
#if (0)
#include <stdio.h>
void print_a(int (*p)[5], int r);
void double_a(int (*p)[5], int r, int n);
int main(void)
{
    int a[3][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 59}, {1, 2, 33, 4, 5}};
    print_a(a, 3);
    double_a(a, 3, 2);
}
void print_a(int (*p)[5], int r)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%4d", *(*(p + i) + j));
        }

        putchar('\n');
    }
}
/*
 void double_a(int (*p)[5],int r,int n)
 {
     int b[3][5];
     int i,j;
     for(i=0;i<r;i++)
     {
         for(j=0;j<5;j++)
         {
             b[i][j] = (*(*(p+i)+j))*2;
         }
     }
     print_a(b,3);
 }
 */
void double_a(int (*p)[5], int r, int n)
{

    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < 5; j++)
        {
            *(*(p + i) + j) *= n;
        }
    }
    print_a(p, 3);
}
#endif
#if (0)
#include <stdio.h>
#include <string.h>
#define SIZE 20
char *s_gets(char *a, int n);
int main(void)
{ //也可以用strncat去做拼接，但是它需要在设一个数组
    char ch[SIZE] = "hello,";

    int avaliable;
    avaliable = SIZE - strlen(ch) - 1;
    printf("what is your name?(enter %d charcaters)\n", avaliable);

    s_gets(ch + strlen(ch), avaliable);
    puts(ch);
    return 0;
}
char *s_gets(char *a, int n)
{
    char ch;
    for (int i = 0; i < n; i++)
    {
        if ((ch = getchar()) != EOF)
            *(a + i) = ch;
    }
    return a;
}
#endif
#if (0)
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define SIZE 10
char *s_gets(char *array, int n);
int main(void)
{

    char array[SIZE];
    printf("please enter the input:");
    s_gets(array, SIZE - 1);
    puts(array);
}
char *s_gets(char *array, int n)
{
    char ch;
    bool flag = false;
    int i = 0;
    while ((ch = getchar()) != EOF && i < n)
    {
        if (isspace(ch))
        {
            if (flag)
                break;
            else
                continue;
        }
        if (!flag)
            flag = true;
        *(array + i) = ch;
        i++;
    }
    //discard剩下的字符
    while ((ch = getchar()) != '\n')
        continue;
    return array;
}
#endif
#if (0)
#include <stdio.h>
#define SIZE 20
char *s_gets(char *array, int n);
char *find(char *array, char ch);
int main(void)
{
    char array[SIZE];
    char ch;
    char *g;
    printf("please enter a string to search:");
    s_gets(array, SIZE);
    while (*array)
    {
        printf("please enter a character to search:");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        g = find(array, ch);
        if (g == NULL)
            printf("the charcater %c not found in string %s\n ", ch, array);
        else
            printf("the charcater '%c' found at the index %lu in the string %s\n",
                   ch, g - array, array);
        printf("please enter a string to search:");
        s_gets(array, SIZE);
    }
    puts("bye");
    return 0;
}
char *s_gets(char *array, int n)
{
    char *vel;
    vel = fgets(array, SIZE, stdin);
    //它读取正确就会返回第一参数的地址，否则就会返回一个空值，
    //所以它正确就会进入loop
    if (vel)
    {
        while (*array != '\n' && *array != '\0')
            array++;
        if (*array == '\n')
            *array = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return vel;
}
char *find(char *array, char ch)
{ //就是用指针找到ch 字符在字符串的位置，找不到就返回空值
    while (*array)
    {
        if (ch == *array)
            return array;
        array++;
    }
    return NULL;
}
#endif
#if (0)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
char *s_gets(char *st, int n);
char *mystrncpy(char *s1, char *s2, int n);
int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int available;

    printf("enter a string:");
    s_gets(s1, SIZE);
    while (*s1)
    {
        printf("enter second string:");
        s_gets(s2, SIZE);
        available = SIZE - 1 - strlen(s1);
        mystrncpy(s1 + strlen(s1), s2, available);
        puts(s1);
        printf("enter a string:");
        s_gets(s1, SIZE);
    }
    puts("bye");
    return 0;
}
char *s_gets(char *st, int n)
{
    char *v;
    char *find;
    v = fgets(st, n, stdin);

    if (v)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return v;
}
char *mystrncpy(char *s1, char *s2, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        *(s1 + i) = *(s2 + i);
    }
    *(s1 + i) = '\0';
    return s1;
}
#endif
#if (0)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
#define SIZE1 20
char *s_gets(char *st, int n);
char *mystrncpy(char *s1, char *s2, int n);
int main(void)
{
    char s1[SIZE1];
    char s2[SIZE];
    int available;

    printf("enter a string:");
    s_gets(s2, SIZE);
    puts(s2);
    while (*s2)
    {
        int n;
        printf("please enter charater u want copy to s1(max to 9):");
        scanf("%d", &n);
        while (getchar() != '\n')
            continue;
        if (n > SIZE - 1)
            n = SIZE - 1;
        mystrncpy(s1, s2, n);
        puts(s1);
        printf("enter a string:");
        s_gets(s2, SIZE);
    }
    puts("bye");
    return 0;
}
char *s_gets(char *st, int n)
{
    char *v;
    char *find;
    v = fgets(st, n, stdin);

    if (v)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return v;
}
char *mystrncpy(char *s1, char *s2, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        *(s1 + i) = *(s2 + i);
    }
    *(s1 + i) = '\0';
    return s1;
}
#endif
#if (0)
#include <stdio.h>
#define SIZE 10
char *s_get(char *s, int n);
char *string_in(char *a, char *b);
int main(void)
{
    char str1[SIZE];
    char str2[SIZE];
    char *p;
    printf("enter first string:");
    s_get(str1, SIZE);
    puts(str1);
    while (*str1)
    {
        printf("please enter second string:");
        s_get(str2, SIZE);
        p = string_in(str1, str2);
        if (p == NULL)
            printf("the str2=%s is not in the str1=%s\n", str2, str1);
        else
            printf("%s found in%s at the index %lu\n", str2, str1, p - str1);
        printf("enter first string:");
        s_get(str1, SIZE);
    }
    puts("bye");
    return 0;
}
char *s_get(char *s, int n)
{
    char *v;
    v = fgets(s, n, stdin);
    if (v)
    {
        while (*s != '\n' && *s != '\0')
            s++;
        if (*s == '\n')
            *s = '\0';
        else
            while (getchar() != '\n')
                ;
    }
    return v;
}
char *string_in(char *a, char *b)
{
    int i;

    while (*a)
    {
        i = 0;
        while (*(a + i) == *(b + i))
        {
            i++;
            if (*(b + i) == '\0') //需要将b数组的字符从头匹配到底，才能return a
                return a;
        }
        a++; //只需要a数组递增
    }
    return NULL;
}
#endif
#if (0)
#include <stdio.h>
#include <string.h>
#define SIZE 10
char *s_get(char *ch, int n);
void reverse(char *ch, int n);

int main(void)
{
    char str1[SIZE];
    printf("please enter  string:");
    s_get(str1, SIZE);
    puts(str1);
    printf("%lu\n", strlen(str1));
    //reverse(str1,SIZE-1);
    reverse(str1, strlen(str1));
    puts(str1);
    printf("%s\n", str1);

    // puts(str1);(这种方法倒过来第一个为0，所以它打印不出来)
    for (int i = 0; i < SIZE; i++)
        printf("%c", *(str1 + i));
}
char *s_get(char *ch, int n)
{
    char *v;
    v = fgets(ch, n, stdin);
    if (v)
    {
        while (*ch != '\n' && *ch != '\0')
            ch++;
        if (*ch == '\n')
            *ch = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return v;
}
void reverse(char *ch, int n)
{
    int start, end, middle;
    char temp;
    start = 0;
    end = n - 1;
    // middle=n/2;
    while (start < end)
    {
        temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;
        start++;
        end--;
    }
}
#endif
#if (0)
#include <stdio.h>
#define SIZE 10
char *s_gets(char *str, int n);
void dele(char *start);
int main(void)
{
    char array[SIZE];
    printf("please enter a string:");
    s_gets(array, SIZE);
    while (*array)
    {
        printf("the string without space:");
        dele(array);

        printf("\nplease enter a string:");
        s_gets(array, SIZE);
    }

    printf("bye");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *temp;
    temp = fgets(str, n, stdin);
    if (temp)
    {
        while (*str != '\n' && *str != '\0')
            str++;
        if (*str == '\n')
            *str = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return temp;
}
void dele(char *start)
{
    char *end = start;
    while (*(end + 1) != '\0')
        end++;
    for (; start <= end; start++)
    {
        if (*start == ' ')
            continue;

        else
            printf("%c", *start);
    }
}
#endif
#if(0)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIM 5
#define SIZE 10
int get_first(void);
int get_choice(void);
char *s_gets(char *st, int n);
void print_string(char *st[], int n);
void sorted_string(char *st[], int n);
void increasing_string(char *st[], int n);
void first_string(char *st[], int n);
int fwlen(char *st);

int main(void)
{

    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    char ch;
    printf("input up to %d lines,and i will sort them :", LIM);
    printf("to stop,press the Enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }
    while ((ch = get_choice()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            print_string(ptstr, ct);
            break;
        case 'b':
            sorted_string(ptstr, ct);
            break;
        case 'c':
            increasing_string(ptstr, ct);
            break;
        case 'd':
            first_string(ptstr, ct);
            break;
        }
    }
    printf("bye");
}
int get_first()
{
    int ch;
    do
    {
        ch = tolower(getchar());
    } while (isspace(ch));
    while (getchar() != '\n')
        continue;
    return ch;
}

int get_choice()
{
    int ch;
    printf("please enter the choice:\n");
    printf("a):print the orignial list of strings  \n");
    printf("b):print the strings in ascii collating sequence  \n");
    printf("c):print the strings in orer of increasing length \n ");
    printf("d):print the strings in orer of the first word in the string  \n");
    printf("q):quit  \n");
    ch = get_first();
    while ((ch) != 'q' && (ch < 'a' || ch > 'd'))
    {
        
        printf("please enter the valid chararter:");
        ch = get_first();
    }
    return ch;
}
char *s_gets(char *st, int n)
{
    char *v;
    int i = 0;
    v = fgets(st, n, stdin);
    if (v)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return v;
}
void print_string(char *st[], int n)
{
    int k = 0;
    for (k = 0; k < n; k++)
    {
        puts(st[k]);
    }
}
void sorted_string(char *st[], int n)
{
    char *temp;
    int top, seek;
    for (top = 0; top < n - 1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
        {
            if (strcmp(st[top], st[seek]) > 0)
            {
                temp = st[top];
                st[top] = st[seek];
                st[seek] = temp;
            }
        }
    }

    print_string(st, n);
}
void increasing_string(char *st[], int n)
{

    char *temp;
    int top, seek;
    for (top = 0; top < n - 1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
        {
            if (strlen(st[top]) > strlen(st[seek]))
            {
                temp = st[top];
                st[top] = st[seek];
                st[seek] = temp;
            }
        }
    }

    print_string(st, n);
}
void first_string(char *st[], int n)
{

    char *temp;
    int top, seek;
    for (top = 0; top < n - 1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
        {
            if (fwlen(st[top]) > fwlen(st[seek]))
            {
                temp = st[top];
                st[top] = st[seek];
                st[seek] = temp;
            }
        }
    }

    print_string(st, n);
}
int fwlen(char *st)
{   //通过循环判断首个字符的长度
    int length = 0;
    //跳过开头的空格
    while (isspace(*st))
        st++;
    //首个字符的长度
    while (!isspace(*st))
    {
        st++;
        length++;
    }
    return length;
}
#endif
#if(0)
#include<stdio.h>

int main(int argc,char *argv[])
{     int i =1;
int end = argc-1;
      char *temp;

    if(argc<2)
     printf("please enter some string:");
     else
     {  while(i<end)
         {
             temp = argv[i];
             argv[i]=argv[end];
             argv[end]=temp;
             i++;
             end--;
         }

for(int i =1;i<argc;i++)
     {
         printf("%s",argv[i]);

     }   
     }
     
              

   
      
}
#endif
#if(0)
#include<stdio.h>

int main(int argc,char *argv[])
{
    char **ptr;
    
     if(argc<2)
     printf("there is no word in the command line parameters!");
     else
     {
         for(ptr=argv+argc-1;ptr>argv;ptr--)
          printf("%s",*ptr);
     }

}
#endif
#if(0)
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
      double base;
      int i,power;
     double result =1.0;
      i = atoi(argv[2]);
      if(argc<2)
      printf("no value input!");
      else
      {   for (power=1;power<=i;power++)
               result  *=atof(argv[1]);
               
            printf("%.2lf",result);

      }

}
#endif
#if(0)
#include<stdio.h>
#include<ctype.h>
int myatoi(char *st);
int main(int argc, char *argv[])
{
     int i;
     int input;
    
    
     if(argc<2)
     printf("no input!");
     else
     {   for(i=1;i<argc;i++)
           {  

                 input = myatoi(argv[i]);
                printf("%d+2=%d\n",input,input+2);

           }     
        
     }

}
int myatoi(char *st)
{ int total=0;
    while(*st)
    {   if(isalpha(*st))
    return 0;
    else
    {
         total *= 10;
         total += *st - '0';
    }
       
        
         st++;
     
    }
     return total;  
}
#endif
#if(0)
#include <stdio.h>
#include <ctype.h>

int my_atoi(char *string);

int main(int argc, char *argv[])
{
	// driver for my_atoi()

	int input;

	if (argc != 2)
		puts("Usage: <program_name> <arg_1>");
	else
	{
		input = my_atoi(argv[1]);
		printf("%d + 5 = %d\n", input, input + 5);
		printf("%d / 2 = %d\n", input, input / 2);
		printf("%d %% 3 = %d\n", input, input % 3);
	}

	return 0;
}

int my_atoi(char *string)
{
	// convert string to integer
	// returns 0 on error

	int total = 0;

	while (*string != '\0')
	{
		if (!isdigit(*string))
			// string is not a pure integer -- return 0
			return 0;
		else
		{
			total *= 10; // shift digits one place to left
			total += *string - '0'; // add newest digit in ones place
		}

		string++;
	}

	return total;
}
#endif
#if(0)
#include<stdio.h>
#include<ctype.h>

int myatio(char *st);
int main(int argc,char *argv[])
{
     char **ptr;
    int input;
    if(argc<2)
    printf("the command line no input!");
    else
    {
        for(ptr=argv;ptr <argv+argc-1;ptr++)
        {
           
                input= myatio(*ptr);
                printf("%d+2=%d\n",input,input+2);

        }
    }
}
int myatio(char *st)
{
    int total=0;
    while(*st)
    {  if(isalpha(*st))
          return 0;
          else
        {
             total *=10;
        total +=*st -'0';
        }  
      
        st++;
    }
    return total;
}
#endif

#include <stdio.h>
#include <ctype.h>

void map_identity(void);
void map_uppercase(void);
void map_lowercase(void);

int main(int argc, char *argv[])
{
    if(argc==1)
     map_identity();
     else if(argc>2 ||   (argc==2&& argv[1][0]!='-'))
     {
          printf("usage:program name[-p |-u |-l] ");
     }
     else
     {  switch(argv[1][1])
     {
         case 'p':map_identity();
                 break;
                 case 'u':map_uppercase();
                 break;
                 case 'l':map_lowercase();
                 break;
                 default:printf("usage:program name[-p |-u |-l] ");
                break;

     }

     }

}
void map_identity(void)
{
    char ch;
    while((ch=getchar())!=EOF)
      putchar(ch);
}
void map_uppercase(void)
{
    char ch;
    while((ch=getchar())!=EOF)
     {
         ch= toupper(ch);
         putchar(ch);
     }
}
void map_lowercase(void)
{
    char ch;
    while((ch=getchar())!=EOF)
    {
        ch=tolower(ch);
        putchar(ch);
    }
}