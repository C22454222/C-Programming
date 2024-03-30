/*
Author: Chris Noblett
Program description: Comparing 2 strings and counting the occurences of the word "is".
Date: 14/03/2023
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

void append(char *sent,char *word1);
int main()
{
    char sent[SIZE] = "First word entered is ";
    int result = 1;
    printf("Enter a word: \n");
    char word2[SIZE];
    fgets(word2,SIZE,stdin);
    char word1[SIZE] = "Hello world";
    result = strcmp(word2,word1);
    if (result == 1)
    {
        printf("The words are the same.\n");
    }
    else
    {
        printf("The words are not the same.\n");
    }
    append(sent,word1);
    return 0;
}

void append(char *sent,char *word1)
{
    int length;
    strcat(sent,word1);
    printf("%s\n",sent);
    length = strlen(sent);
    printf("%d character count.",length-1);
}