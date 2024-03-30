/*
Author: Chris Noblett
Program description: Array of 3 in ascending order.
Date: 24/11/2022
*/
#include <stdio.h>

#define SIZE 3

int main()
{
    int array1[SIZE] = {0};
    int i, j, temp;

    printf("Enter 3 numbers: \n");

    for(i = 0; i < SIZE ; i++)
    {
        scanf("%d", &array1[i]);
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("%d", array1[i]);
    }

    printf("\nNow in ascending order\n");

    for(i = 0; i < SIZE -1; i++)
    {
        for(j=0; j < SIZE - i - 1;j++)
        {
            if (array1[j] > array1[j+1])
            {
                temp = array1[j];
                array1[j] = array1[j+1];
                array1[j+1] = temp;
            }
        }
        
            
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("%d", array1[i]);
    }


    return 0;

} // end main()