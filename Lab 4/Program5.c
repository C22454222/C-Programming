/*
Author: Chris Noblett
Program description: Program to check the sides of a triangle and if the sum of any two sides is greater than the third side.
word.
Date: 26/10/2022
*/

#include <stdio.h>

int main()
{
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    printf("Enter the lengths of the sides of a triangle\n");
    scanf("%d", &side1);
    scanf("%d", &side2);
    scanf("%d", &side3);

    // Check if a valid triangle
 /*   if ( ((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side3 + side1) > side2) )
    {
        printf("\nValid Triangle");

    } // end if
*/
    // This nested if statement is the same as the if statement above
    if ( ((side1 + side2) > side3) )
    {
        if ( ((side2 + side3) > side1) )
        {
            if ( ((side3 + side1) > side2) )
            {
                printf("\nValid Triangle");

            } // end inner-most if

        } // end inner if

    } // end if
    else
    {
        printf("\nIn valid Triangle");
    } // end else
    
    return 0;

} // end main