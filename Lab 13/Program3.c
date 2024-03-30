/*
Author: Chris Noblett
Program description: Finding the mean value in an array using a separate function that returns the average value.
Date: 14/02/2023
*/

#include <stdio.h>

#define SIZE 5
// Function signature
int sum_array(float[]);
int main()
{
    float values[SIZE];
    int i;
    float average = 0;
    printf("Enter %d numbers\n", SIZE);
    //Enter data into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", & values[i]); // scanf("%d", & *(values + i));
    } // end for
    average = sum_array(values);
    printf("\nThe average value of the array is %f", average);
    return 0;
} 
int sum_array(float my_array[])
{
    float av = 0;
    int sum = 0;
    int i;
    for(i = 0; i < SIZE; i++)
    {
        sum = sum + my_array[i];
    } // end for
    av = sum / SIZE;
    return av;
} 