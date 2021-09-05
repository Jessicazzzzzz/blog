#include <stdio.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
    int ch;
    int flag = 1;
    char mode = 'p';

    if (argc > 2)
    {
        printf("Command line parameter is invalid!\n");
        flag = 0;
    }
    else if (argc == 2)
    {
        if (argv[1][0] != '-')
        {
            printf("Add'-' before inputting command line parameters!\n");
            flag = 0;
        }
        else
        {
            switch(argv[1][1])
            {
            case 'p' :
            case 'u' :
            case 'l' :
                mode = argv[1][1];
                break;
            default :
                printf("The command line parameter is invalid! The program will use -p to run!\n");
            }
        }
    }
    if (flag)
    {
        printf("Please enter some characters (stop reading in case of EOF):\n");
        while ((ch=getchar()) != EOF)
        {
            switch(mode)
            {
            case 'p' :
                putchar(ch);
                break;
            case 'u' :
                putchar(toupper(ch));
                break;
            case 'l' :
                putchar(tolower(ch));
                break;
            }
        }
    }
    printf("This procedure is complete!\n");

    return 0;
}