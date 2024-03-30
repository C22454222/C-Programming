/*
Author: Chris Noblett
Program description: Using calloc function to allocate memory for 5 floating point numbers. Finds the average aswell.
Date: 13/12/2022
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    //(i)
    float *ptr;
    float numbers = SIZE;
    int i;
    float av,sum;

    ptr = calloc(numbers, sizeof(float));

    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    } 
    else 
    {
        printf("\nMemory allocated successfully\n");
    //(ii)
        printf("\nEnter the set of %f numbers\n", numbers);
        
        for(i = 0; i < SIZE; i++)
        {
            scanf("%f", & *(ptr + i));
            sum = sum + *(ptr+i);
        } 
    //(iii)
        av = sum / SIZE;
        printf("The average of these numbers is: %f",av);
        free(ptr);
    }
    return 0;
}