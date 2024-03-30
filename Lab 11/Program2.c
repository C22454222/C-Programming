/*
Author: Chris Noblett
Program description: Creating a function with 2 paramters. A character and an integer. Making the character display x amount of times.
Date: 31/01/2023
*/
#include<stdio.h>

void times(char,int);

int main()
{
    int num;
    char ch = '*';
    
    printf("How many characters to display?: ");
    scanf("%d", &num);

    times(ch,num);
    return 0;
}

void times(char cha,int n1)
{
    int i;
    for(i=0;i<n1;i++)
    {
        printf("%c", cha);
    }
}


