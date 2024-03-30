/*
Author: Chris Noblett
Program description: Creating three arrays. The first two take inputs and then multiply the corresponding elements.The third array
stores and prints the products of the multiplications.
Date: 29/11/2022
*/
#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int array1[ROW][COL] = {0};
    int array2[ROW][COL] = {0};
    int array3[ROW][COL] = {0};
    int i, j;

    //Array 1
    printf("\nEnter values for the first array:\n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &array1[i][j]);

        } // end inner for

    } // end outer for

    //Array 2
    printf("\nEnter values for the second array:\n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &array2[i][j]);

        } // end inner for

    } // end outer for

    //Array 3
    printf("The product of each multiplication from corresponding elements in the first and second array:\n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            array3[i][j] = (array1[i][j])*(array2[i][j]);
            printf("The product is: %d\n", array3[i][j]);

        } // end inner for

    } // end outer for
   
    
    return 0;
}