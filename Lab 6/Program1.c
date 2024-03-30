/*
Author: Chris Noblett
Program description: Program that copies the contents of 1 array into another.
Date: 24/11/2022
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    int array1[SIZE] = {0};
    int array2[SIZE] = {0};

    int i;


    printf("Enter %d numbers\n", SIZE);

    //Enter numbers into array1
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\nCopying process beginning ...\n\n");

    //Copy the contents of array1 into array2
    for(i = 0; i < SIZE; i++)
    {
        array2[i] = array1[i];

        // Display array2
        printf("%d ", array2[i]);
    }

    return 0;

} // end main()