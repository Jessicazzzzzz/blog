#include <stdio.h>

int main(int argc, char * argv[])
{
    int i = 0;

    printf("The name of this program is: %s.\n", argv[i]);
    if (argc < 2)
    {
        printf("There are no words in the command line parameters!\n");
    }
    else
    {
        printf("The original word is:\n");
        for (i=1; i<argc; i++)
        {
            printf("%s ", argv[i]);
        }
        printf("\nDisplay the original word in reverse order:\n");
        for (i=argc-1; i>0; i--)
        {
            printf("%s ", argv[i]);
        }
        putchar('\n');
    }

    return 0;
}