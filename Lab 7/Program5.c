/*
Author: Chris Noblett
Program description: Getting inputs for 2 1D arrays and multiplying the corresponding elements within the arrays. Print the product.
Date: 23/11/2022
*/
#include <stdio.h>

#define ROW 4
#define COL 5

int main()
{
    int array[ROW][COL] = {0};
    int i, j;

    printf("Enter values:\n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &array[i][j]);

        } // end inner for

    } // end outer for

    // Display the row and column for any contents less than 0
    printf("\n\nChecking for any values less than zero\n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(array[i][j] < 0)
            {
                printf("\nRow %d, Col %d is less than 0 (contains %d)", i, j, array[i][j]);
            } // end if

        } // end inner for
        
    } // end outer for
    
    return 0;
}