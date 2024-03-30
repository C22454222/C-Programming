/*
Author: Chris Noblett
Program description: Printing an array of 15 in ascending order on a new line for each item and on the same line with one space
between each item. Also printing an array in reverse order with the same conditions as the previous one mentioned.
Date: 23/11/2022
*/
#include <stdio.h>

#define SIZE 15

int main()
{
    float array[SIZE] = {0};
    int i;

    printf("Enter  15 numbers:\n");
    for(i = 0; i < SIZE; i++)
    {
            scanf("%f", &array[i]);

    } // end outer for

    //Part (a)
    for(i = 0; i < SIZE; i++)
    {
            printf("\n%f\n", array[i]);

    } // end outer for
    printf("\n");
    //Part (b)
    for(i = 0; i < SIZE; i++)
    {
            printf("%f ", array[i]);

    } // end outer for
    printf("\n\n");
    //Part (c)
    for(i = 0; i < SIZE; i++)
    {
            printf("%f ", array[SIZE - i - 1]);

    } // end outer for


    return 0;
}