/*
Author: Chris Noblett
Program description: Write a program that uses a 3x2 (2-D) array. Print values. Find the min, max and average values respectively.
Date: 23/11/2022
*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int my_array[ROW][COL] = {0};
    int i, j;
    int high, low;
    int sum = 0;
    float avg = 0;


    //Part a
    printf("Enter values:\n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &my_array[i][j]);

        } // end inner for

    } // end outer for

    
    //Part b
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d", my_array[i][j]);

        } // end inner for

        // display next row on a new line
        printf("\n ");

    } // end outer for


    //Part c
    //Assume the highest and lowest are inside the 1st element of the array
    high = my_array[0][0];
    low = my_array[0][0];

    // traverse the array checking every element for the highest and lowest
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(high < my_array[i][j])
            {
                high = my_array[i][j];
            } // end if

            if(low > my_array[i][j])
            {
                low = my_array[i][j];
            } // end if

        } // end inner for

    } // end outer for

    printf("\n\nHigh is %d and Low is %d", high, low);


   //Part d
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            sum = sum + my_array[i][j];

        } // end inner for

    } // end outer for

    avg = (float)sum / (ROW * COL);

    printf("\n\nAverage is %.1f", avg);
    
    return 0;
}