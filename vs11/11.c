#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define ROWS 10
#define COLUMNS 50

int get_first(void);
int get_choice(void);
char * s_gets(char * st, int n);
void origin_output(char str[][COLUMNS], int n);
void ascll_output(char * str[], int n);
void length_up_output(char * str[], int n);
void first_word_output(char * str[], int n);
int word(char * str);
int get_strings(char string[][COLUMNS], char * str[], int n);

int main(void)
{
    char * str[ROWS];
    char strings[ROWS][COLUMNS];
    int n, choice;

    printf("Please enter the %d string (or end reading in case of EOF):\n", ROWS);
    if (n = get_strings(strings, str, ROWS))
    {
        while ((choice = get_choice()) != 'q')
        {
            switch(choice)
            {
            case 'a':
            {
                origin_output(strings, n);
                break;
            }
            case 'b':
            {
                ascll_output(str, n);
                break;
            }
            case 'c':
            {
                length_up_output(str, n);
                break;
            }
            case 'd':
            {
                first_word_output(str, n);
                break;
            }
            }
        }
    }
    printf("This procedure is complete!\n");

    return 0;
}

int get_strings(char string[][COLUMNS], char * str[], int n)
{
    int i = 0;
    char (*pointer)[COLUMNS];

    for (pointer=string; pointer<string+n; pointer++)
    {
        if (s_gets(*pointer, COLUMNS))
        {
            str[i++] = *pointer;
        }
        else
        {
            break;
        }
    }
    return i;
}

int get_first(void)
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

int get_choice(void)
{
    int ch;

    printf("=======================================\n");
    printf("a) Print source string list\n");
    printf("b) Print the string in ASCII order\n");
    printf("c) Print strings in increasing order of length\n");
    printf("d) Print the string according to the length of the first word in the string\n");
    printf("q)Quit\n");
    printf("=======================================\n");
    printf("Please enter your choice:");
    ch = get_first();

    while ((ch<'a' || ch>'d') && (ch!='q'))
    {
        printf("The input is invalid! Please input a, b, c, d or q:");
        ch = get_first();
    }
    return ch;
}

void origin_output(char str[][COLUMNS], int n)
{
    int i;

    printf("Print %d string source string list:\n", n);
    for (i=0; i<n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');
    return;
}

void ascll_output(char * str[], int n)
{
    char * temp;
    int i, j;

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            //↓Sorted in ASCII code order;
            if (strcmp(str[i],str[j]) > 0)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Print %d string string in ASCII order (from small to large):\n", n);
    for (i=0; i<n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');
    return;
}

void length_up_output(char * str[], int n)
{
    char * temp;
    int i, j;

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            //↓Sort by the number of characters in the string;
            if (strlen(str[i]) > strlen(str[j]))
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Print %d strings in increasing order of length:\n", n);
    for (i=0; i<n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');
    return;
}

int word(char * str)
{
    int length = 0;
    bool inword = false;

    /* Count the words of the first non-blank character in the string
         The length is passed to the calling function as the return value; */
    while (*str)
    {
        if (!isspace(*str) && !inword)
        {
            /*↑From the first non-blank character
                         Start counting word length*/
            inword = true;
            length++;
        }
        else if (!isspace(*str) && inword)
        {
            length++;
        }
        else if (isspace(*str) && inword)
        {
            /*↑If you encounter a blank character after the first word
                         Then exit the loop*/
            break;
        }
        str++;
    }
    return length;
}

void first_word_output(char * str[], int n)
{
    int i, j;
    char * temp;

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            //↓Sort by the length of the first word;
            if (word(str[i]) > word(str[j]))
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Print %d string string according to the length of the first word in the string (from small to large):\n", n);
    for (i=0; i<n; i++)
    {
        puts(str[i]);
    }
    putchar('\n');
    return;
}