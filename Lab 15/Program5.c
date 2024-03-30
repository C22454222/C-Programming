/*
Author: Chris Noblett
Program description: Checking if two words are the same and adding strings together. Counting characters within that string using strlen().
Date: 07/03/2023
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
    printf("Enter 2 words: \n");
    char word1[SIZE];
    fgets(word1,SIZE,stdin);
    char word2[SIZE];
    fgets(word2,SIZE,stdin);
    result = strcmp(word1,word2);
    if (result == 0)
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
