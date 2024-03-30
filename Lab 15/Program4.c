/*
Author: Chris Noblett
Program description: Comparing if 2 words are the same or not the same.
Date: 07/03/2023
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
    int result = 1;
    printf("Enter 2 words: \n");
    char word1[SIZE];
    scanf("%s",word1);
    char word2[SIZE];
    scanf("%s",word2);
    result = strcmp(word1,word2);
    if (result == 0)
    {
        printf("The words are the same.");
    }
    else
    {
        printf("The words are not the same.");
    }
    return 0;
}