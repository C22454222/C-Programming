/*
Author: Chris Noblett
Program description: Using calloc function to allocate memory for a conditional amount of integers. Displays the elements and the sum.
Date: 13/12/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int numbers = 0;
    int i,sum;
    
    printf("\nHow many numbers will you enter?\n");
    
    scanf("%d", & numbers);
    
    ptr = calloc(numbers, sizeof(int));
    
    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    } 
    else 
    {
        printf("\nMemory allocated successfully\n");
        
        printf("\nEnter the set of %d numbers\n", numbers);
        
        for(i = 0; i < numbers; i++)
        {
            scanf("%d", & *(ptr + i));
        } 
    
        printf("\nYou entered:\n");
        
        for(i = 0; i < numbers; i++)
        {
            printf("%d\n", *(ptr + i));
        }
        for(i = 0; i < numbers; i++)
        {
            sum = sum + *(ptr+i);
        }
        printf("\nThe sum of the integers is: %d",sum);

    
        free(ptr);
    } 
    return 0;
} 