/*
Author: Chris Noblett
Program description: Taking a positive integer in and
halving the number if it is even. If it is odd, *3 and
add 1. Repeat the process until the number is 1. Display
the final value with the step count.
Date: 01/11/2022
*/
/*
Program that will input a positive integer value, and compute the following
sequence:
            if the number is even, halve it
            if the number is odd, multiply by 3 and add 1.
Repeat this process until the value is 1, displaying each value.
Finally it will display how many of these operations you performed.
*/

#include <stdio.h>

int main()
{
    int num;
    int counter = 0;


    // keep asking the user to enter a positive number
    do
    {
        printf("Enter any positive number\n");
        scanf("%d", & num);

    } while ( num < 1);
    
    

    printf("\nInitial value is %d", num);

    // Keep looping while num not equal to 1
    do
    {
        // Check if even or odd
        if (num % 2 == 0)
        {
            num = num / 2;
        } // end if
        else
        {
            num  = (num * 3) + 1;
        } // end else

        // Increment the counter to count the number of cycles
        counter++;

        // check if num not equal to one
        if (num != 1)
        {
            printf("\nNext value is %d", num);
        }

    } while (num != 1);
    
    printf("\nFinal value is %d, number of steps is %d \n", num, counter);

    return 0;

} // end main