#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 10

char * s_gets(char * st, int n);
int myatoi(char * str);

int main(int argc, char * argv[])
{
    char input[LEN];

    printf("Please enter a string (only read the first %d characters):\n", LEN - 1);
    while (s_gets(input, LEN) && (*input != '\0'))
    {
        printf("The conversion of string %s to integer is %d\n", input, myatoi(input));
        printf("You can enter a string of characters again (or exit with a new line):\n");
    }
    printf("This procedure is complete!\n");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st,n,stdin);
    if (ret_val)
    {
        find = strchr(st,'\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar()!='\n')
                continue;
        }
    }
    return ret_val;
}

int myatoi(char * str)
{
    int i;
    int n = 0;

    for (i=0; i<strlen(str); i++)
    {
        if (!isdigit(str[i]))
        {
            return 0;
        }
        else
        {
            n = n * 10 + (str[i] - '0');
        }
    }
    return n;
}