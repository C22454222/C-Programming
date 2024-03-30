/*
Author: Chris Noblett
Program description: Getting inputs for 2 1D arrays and multiplying the corresponding elements within the arrays. Print the product.
Date: 23/11/2022
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    int array1[SIZE] = {0};
    int array2[SIZE] = {0};
    int i, j;
    int multi;
    printf("Enter  5 numbers:\n");
    for(i = 0; i < SIZE; i++)
    {
            scanf("%d", &array1[i]);

    } // end outer for

    printf("\nEnter  5 numbers:\n");
    for(j = 0; j < SIZE; j++)
    {
            scanf("%d", &array2[j]);

    } // end outer for

    printf("Multiplication time...\n");
    for(i = 0; i < SIZE; i++)
    {
        multi = (array1[i])*(array2[i]);
        printf("Product of corresponding elements is %d\n", multi);

    } // end outer for
    
    return 0;
}