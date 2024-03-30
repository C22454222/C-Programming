/*
Author: Chris Noblett
Program description: Program to sum all odd integers in range 1-99.
Date: 01/11/2022
*/
#include <stdio.h>

int main()
{
    int counter = 1;
    int sum = 0;

    // cycle between 1 - 10
    do
    {

        if(counter % 2 != 0 )
        {
            sum = sum + counter;
            printf("The sum is %d\n" , sum);
        } // end if

        
        // increment counter
        counter++;

    } // end do
    while(counter < 100);

    return 0;

} // end main()