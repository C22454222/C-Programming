/*
Author: Chris Noblett
Program description: Printing array with inputs from the user and swapping 1st and second element and 3rd and fourth.
Date: 24/11/2022
*/
#include <stdio.h>

#define SIZE 4

int main()
{
    int array1[SIZE] = {0};
    int i, temp;

    printf("Enter %d numbers\n", SIZE);

    //Enter numbers into array1
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("%d", array1[i]);
    }
    
    printf("\nSwapping process beginning ...\n\n");

    // Swap the 1st and 2nd number
    temp = array1[0];
    array1[0] = array1[1];
    array1[1] = temp;

    // Swap the 3rd and 4th number
    temp = array1[2];
    array1[2] = array1[3];
    array1[3] = temp;


    //Display the contents of array1
    for(i = 0; i < SIZE; i++)
    {
        // Display array2
        printf("%d ", array1[i]);
    }


    return 0;

} // end main()