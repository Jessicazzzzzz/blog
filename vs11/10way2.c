#include <stdio.h>
#include <string.h>
#define LEN 20
#define SPACE ' '

char * s_gets(char * st, int n);
void delete(char * str);

int main(int argc, char * argv[])
{
    char source[LEN];

    printf("Please enter a string (only read the first %d characters):\n", LEN - 1);
    while (s_gets(source, LEN) && (*source != '\0'))
    {
        printf("The source string is:\n%s\n", source);
        delete(source);
        printf("The string after removing the spaces is:\n%s\n", source);
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

void delete(char * str)
{
    int count = 0;
    char * pt = str;

    while (*str)
    {
        if (*str != SPACE)
        {
            *pt++ = *str++;
            /*↑Modifying the content pointed to by pt is equivalent
                         Modified the content pointed to by str;*/
        }
        else
        {
            str++;
            count++;
            /*↑If it is a space, count the number of spaces and
                         Point to the next memory space;*/
        }
    }
    while (count--)
    {
        *pt++ = '\0';
        //↑Remove the space and overwrite the original character at the end;
        //↑and clear the remaining characters;
    }
    return;
}