
/* Programming Exercise 12-9.c */

// Write a program with the following behavior. First, it asks you how many words you
// wish to enter. Then it has you enter the words, and then it displays the words. Use
// malloc() and the answer to the first question (the number of words) to create a dynamic
// array of the corresponding number of pointers-to-char. (Note that because each element
// in the array is a pointer-to-char, the pointer used to store the return value of malloc()
// should be a pointer-to-a-pointer-to-char.) When reading the string, the program should
// read the word into a temporary array of char, use malloc() to allocate enough storage
// to hold the word, and store the address in the array of char pointers. Then it should
// copy the word from the temporary array into the allocated storage. Thus, you wind up
// with an array of character pointers, each pointing to an object of the precise size needed
// to store the particular word. A sample run could look like this:

// How many words do you wish to enter? 5
// Enter 5 words now:
// I enjoyed doing this exercise
// Here are your words:
// I
// enjoyed
// doing
// this
// exercise

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 200
char **get_words(int n);
void findwords(char **, char **);
int main(void)
{
    int n;
    //为什么要是**words？因为需要把单词考虑成数组的数组
    char **words;
    printf("How many words do you wish to enter? ");
    while (scanf("%d", &n) == 1 && n > 0)
    {
        while (getchar() != '\n')
            continue;
        printf("enter %d words:", n);
        words = get_words(n);
        printf("here your words:\n");
        for (int i = 0; i < n; i++)
            printf("%s\n", words[i]);
        printf("How many words do you wish to enter? ");
    }
    free(words);
    return 0;
}
//这个题目是首先创造一个数组，将一字符串读入进去，其次找出这个字符串的每一个单词作为一个字符串再读入
//malloc数组
char **get_words(int n)
{//创建一个数组，把所有的字符串放进去
    char tmp[LIMIT]; 
    int i;
    //创建一个word的开始的指针,但是应该考虑它是一个装着数组的数组
    char *word_start; 
    char *word_end;   //创建一个word 结束的指针
    int word_length;
    char **word_array = (char **)malloc(n * sizeof(char *)); //创建一个动态数组的数组
    word_start = fgets(tmp, LIMIT, stdin);
    printf("%c\n",*(word_start+2));
    puts(word_start);
    for (i = 0; i < n; i++)
    {
        findwords(&word_start, &word_end);
        if (*word_start == '\0')
            break;
        word_length = word_end - word_start;
        word_array[i] = (char *)malloc((word_length + 1) * sizeof(char)); //注意数组的长度
        if (word_array[i] != NULL)                                        //注意这个条件
        {
            strncpy(word_array[i], word_start, word_length);
            word_array[i][word_length] = '\0';
        }
        word_start = word_end; //需要将一个单词的结束设为另一单词的开始。
    }
    if (i < n)
    {
        for (; i < n; i++) //如果输入小于读取的字符数的话就设为0，不然就不太友好，不能继续下去不行输入一样的n
        {
            word_array[i] = (char *)malloc(sizeof(char));
            *word_array[i] = '\0';
        }
    }
    return word_array;
}
void findwords(char **start, char **end)
{ //  ab cd  假设这两个字符串数组，首先先jump 空格，start 指针增加，一直到空格结束
    //end 就是start.然后end不是空白且不是最后‘\0'，end 指针增加，这就读取了一个单词。
    while (isspace(**start))

        (*start)++;
    *end = *start;
    while (!isspace(**end) &&(**end)!='\0')
        (*end)++;
}
