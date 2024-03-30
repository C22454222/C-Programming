/*
Author: Chris Noblett
Program description: Finding the capital of a country using strings and a conditional statement.
Date: 07/03/2023
*/
#include <stdio.h>
#include <string.h>
#define SIZE 11
int main()
{
    char *countries[SIZE] = {"Australia", "Belgium", "China", "Denmark","England","France","Greece","Ireland","Scotland","Wales"};
    char *capitals[SIZE] = {"Canberra","Brussels","Beijing","Copenhagen","London","Paris","Athens","Dublin","Edinburgh","Cardiff"};
    char answer[SIZE];
    int i;
    int result = 1;
    printf("Enter a country\n");
    scanf("%s",answer);
    for(i=0;i<SIZE;i++)
    {
        result = strcmp(answer,countries[i]);
        if (result == 0)
        {
            puts(capitals[i]);
            break;
        }
    }
    return 0;
}