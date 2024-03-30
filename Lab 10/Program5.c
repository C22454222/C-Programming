/*
Author: Chris Noblett
Program description: Copy of Program4. Using calloc function to allocate memory for 5 floating point numbers.
The average is stored in a separate memory block which must be allocated separately.
Date: 13/12/2022
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define SIZE1 1

int main()
{
    //(i)
    float *ptr;
    float *p;
    float numbers = SIZE;
    int i;
    float sum;
    float av = SIZE1;

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
        free(ptr);
    }
    //(iii)
    p = calloc(av, sizeof(float));
    if(p == NULL)
    {
        printf("\nFailed to allocate memory\n");
    }
    else
    {
        printf("\nMemory allocated successfully\n");
        printf("%f", sum);
         for(i = 0; i < SIZE1; i++)
        {
            *(p+i) = sum / SIZE;
        } 
        printf("The average of these numbers is: %f",av);
        free(p);
    }

    return 0;
}