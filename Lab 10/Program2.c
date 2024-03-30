/*
Author: Chris Noblett
Program description: Finding miles per litre using 3 arrays. Pointer notation only. Third array is used to store calculations of first 2.
Date: 13/12/2022
*/
#include <stdio.h>
#define SIZE 5

int main()
{
    float litres[SIZE] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[SIZE] = {471.5, 358.72, 495.3, 453.6, 421.6};
    float mpl[SIZE];
    int i;

    for (i=0;i<SIZE;i++)
    {
        *(mpl+i) = *(miles+i) / *(litres+i);
        
    }

    for (i=0;i<SIZE;i++)
    {
        printf("%.1f\n", *(mpl+i));
        
    }

    return 0;
}
