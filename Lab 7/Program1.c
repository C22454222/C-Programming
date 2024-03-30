/*
Author: Chris Noblett
Program description: Printing array in in descending order and printing first 5 elements in ascending and descending order.
Also identifying what is the second last element in the array.
Date: 23/11/2022
*/
#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        arr[i] = (SIZE - 1) - i;

        printf("%d ", arr[i]);
        
    } // end for
    
    // check arr[8]
    printf("\n\narr[8] contains: %d", arr[8]);

    printf("\n\n");

    
    for(i = 0; i < SIZE; i++)
    {
        arr[i] = arr[ arr[i] ];

        printf("%d ", arr[i]);
        
    } // end for

    // check arr[8]
    printf("\n\narr[8] contains: %d", arr[8]);
    
    return 0;
}