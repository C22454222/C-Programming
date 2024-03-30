/*
Author: Chris Noblett
Program description: Summing the elements of a 2D array.
Date: 29/11/2022
*/
#include <stdio.h>

#define ROW 4
#define COL 6

int main()
{
    int data[ROW][COL] ={ {3, 2, 5, 7, 4, 2},
                     {1, 4, 4, 8, 13, 1},
                     {9, 1, 0, 2, 0, 0},
                     {0, 2, 6, 3, -1, -8}
                        };
    int sum;
    int i, j;
    sum = 0;
    for ( i=0; i < ROW; i++)
    {
        for ( j=0; j < COL; j++)
        {
            sum = sum + data[i][j];
        }
    }
    // display the sum
    printf("\nThe sum of all the elements in the array is %d ",sum);

   
    
    return 0;
}