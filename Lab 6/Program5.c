/*
Author: Chris Noblett
Program description: Printing out a character array as a string and for each individual character.
Date: 24/11/2022
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    char array[SIZE] = {'C', 'H', 'R','I','S'};
    int i;

    for(i = 0; i < SIZE; i++)
    {
        printf("%c", array[i]);
        

    }
    for(i = 0; i < SIZE; i++)
    {
        printf("\n%c\n", array[i]);
        

    }


    return 0;

} // end main()