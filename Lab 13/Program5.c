/*
Author: Chris Noblett
Program description: Function to determine if a number is odd or even in an array. Returns the count of even numbers back to main().
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
    int evens = 0;
    printf("Enter %d numbers\n", SIZE);
    //Enter data into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", & values[i]); // scanf("%d", & *(values + i));
    } // end for
    printf("Now printing the numbers back out through the function...\n");
    evens = sum_array(values);
    printf("\nThe number of even values in the array is %d", evens);
    return 0;
} // end main()
/* Function sum_array() will calculate the sum of the contents of any
1-D array
*/
int sum_array(int my_array[])
{
    int i;
    int even;
    even = 0;
    for(i = 0; i < SIZE; i++)
    {
        if(my_array[i] % 2 == 0)
        {
            printf("%d is even\n", my_array[i]); 
            even++;
        }
        else
        {
            printf("%d is odd\n", my_array[i]); 
        }
    } // end for
    return even;
} // end sum_array()