/*
Author: Chris Noblett
Program description: Testing strings and characters with print functions and array functionality. Also reading in a name with letter spaces.
Date: 28/02/2023
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
int main()
{
    //Q5
    //a
    char *p = "abcd";
    while (*p)
        putchar(*p++);
    printf("\n");
    //b
    char *text = "abcd";
    char *ptr = text;
    ptr += strlen(ptr) - 1;
    while (text <=ptr)
        puts(ptr--);
    

    //Q6
    char name[SIZE]; // assuming this has N characters and you want to add a space in between all of them.
    char bar[2*SIZE];
    int i;
    printf("Enter your name: ");
    scanf("%s", name);
    for (int i = 0; i < SIZE; i++) 
    {
        bar[2*i] = name[i];
        if (i != SIZE - 1)
            bar[2*i + 1] = ' ';
    }
    printf("%s",bar);

    return 0;
}