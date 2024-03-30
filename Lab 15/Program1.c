/*
Author: Chris Noblett
Program description: Asking a user for their name. Comparing it to a list of names. Outputting if it is or not.
Date: 07/03/2023
*/
#include <stdio.h>
#include <string.h>
#define SIZE 20
int main()
{
    char *names[SIZE] = {"Chris", "Keanu", "Jessica", "Angela"};
    char answer[SIZE];
    int i;
    int result = 1;
    printf("Enter your name\n");
    scanf("%s",answer);
    for(i=0;i<SIZE;i++)
    {
        result = strcmp(answer,names[i]);
        if (result == 0)
        {
            printf("Greetings");
            break;
        }
        else
        {
            printf("Name not found");
            break;
        }
    }
    return 0;
}