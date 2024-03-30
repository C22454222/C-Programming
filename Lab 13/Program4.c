/*
Author: Chris Noblett
Program description: Finding the max value in an array using a separate function that returns the maximum value. This time, double each number.
Date: 14/02/2023
*/

#include <stdio.h>

#define SIZE 5
// Function signature
int sum_array(int[]);
int main()
{
    int values[SIZE];
    int i;
    int maximum = 0;
    printf("Enter %d numbers\n", SIZE);
    //Enter data into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", & values[i]); // scanf("%d", & *(values + i));
    } // end for
    maximum = sum_array(values);
    printf("\nThe max value of the array is %d\n", maximum);
    for(i = 0; i < SIZE; i++)
    {
        printf("%d\n", values[i]); // scanf("%d", & *(values + i));
    } // end for
    return 0;
} // end main()
/* Function sum_array() will calculate the sum of the contents of any
1-D array
*/
int sum_array(int my_array[])
{
    int max = my_array[0];
    int i;
    for(i = 0; i < SIZE; i++)
    {
        my_array[i] = my_array[i] * 2;
        if(my_array[i] > max)
        {
            max = my_array[i];
        }
    } // end for
    return max;
} // end sum_array()