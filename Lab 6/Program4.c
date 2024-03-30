/*
Author: Chris Noblett
Program description: Getting array inputs from user and printing original array and reverse order array. 
Date: 24/11/2022
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    int array1[SIZE] = {0};
    int array2[SIZE] = {0};
    int i;
    int j;
    j = 4;

    printf("Enter %d numbers:\n", SIZE);

    //Enter numbers into array1
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array1[i]);
    }


    printf("\nREVERSE Copying process beginning ...\n\n");

    //Copy the contents of array1 into array2 in REVERSE order
    for(i = 0; i < SIZE; i++)
    {
        array2[j] = array1[i];

        // Decrement j
        j--;
    }


    // Display the contents of array2
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array2[i]);
    }


    return 0;

} // end main()