/*
Author: Chris Noblett
Program description: Performing various operations with a 3x2 array. Getting the sum of each row and column. Also finding maximum[i][j].
Date: 29/11/2022
*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int my_array[ROW][COL] = {0};
    
    // used for parts b & c
    int row_sum[ROW] = {0};
    int col_sum[COL] = {0};

    int highest = 0;
    int i, j;

    int sum = 0;


    // Part a
    // Enter values into array

    printf("Enter %d values into array\n\n", ROW*COL);
    
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &my_array[i][j]);
        } // end inner for

    } // end outer for



    // Part b
    // Calculate the sum of Row 0, 1 & 2 separately
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (i == 0)
            {
                row_sum[i] = row_sum[i] + my_array[i][j];
            }
            if (i == 1)
            {
                row_sum[i] = row_sum[i] + my_array[i][j];
            }
            if (i == 2)
            {
                row_sum[i] = row_sum[i] + my_array[i][j];
            }

        } // end inner for

    } // end outer for

    // Display the sum of Row 0, 1 & 2 separately
    for (i = 0; i < ROW; i++)
    {
        printf("\nThe sum of Row %d is %d", i, row_sum[i]);
    } // end inner for


    // Part c
    // Calculate the sum of Col 0 & 1 separately
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (j == 0)
            {
                col_sum[j] = col_sum[j] + my_array[i][j];
            }
            if (j == 1)
            {
                col_sum[j] = col_sum[j] + my_array[i][j];
            }

        } // end inner for

    } // end outer for

    // Display the sum of Col 0 & 1 separately
    for (i = 0; i < COL; i++)
    {
        printf("\nThe sum of Col %d is %d", i, col_sum[i]);
    } // end inner for



    // Part d
    // Find the highest number in the array and display to standard output

    // Assume the highest number in the array is in element [0][0]
    highest = my_array[0][0];

    // Find the highest value in the array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (highest < my_array[i][j])
            {
                highest = my_array[i][j];
            }

        } // end inner for

    } // end outer for

    printf("\n\nThe highest value in the array is %d", highest);

    return 0;

} // end main