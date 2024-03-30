/*
Author: Chris Noblett
Program description: Program to count 1 - 10 and displays a message when the count is 3 and 7.
Date: 01/11/2022
*/
#include <stdio.h>

int main()
{
    int counter = 1;

    // cycle between 1 - 10
    do
    {
        printf("\ncounter is %d", counter);

        if(counter == 3)
        {
            printf("\nThis number is three");
        } // end if

        if(counter == 7)
        {
            printf("\nThis number is seven");
        } // end if
        
        // increment counter
        counter++;

    } // end do
    while(counter < 11);

    return 0;

} // end main()