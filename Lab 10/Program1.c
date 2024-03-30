/*
Author: Chris Noblett
Program description: Replacing blank characters in an array with underscore characters using pointer notation only.
Date: 13/12/2022
*/
#include <stdio.h>
#define SIZE 8

int main()
{
    char chars[] = { 'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i;

    for (i=0; i<SIZE;i++)
    {
        if (*(chars+i) == ' ')
        {
            *(chars+i) = '_';
        }
    }

     for (i=0; i<SIZE;i++)
    {
        printf("%c", *(chars+i));
        
    }


    return 0;
}