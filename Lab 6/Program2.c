/*
Author: Chris Noblett
Program description: Program that enters a set of temperatures in Fahrenheit and calculates the corresponding temperatures in Celsius.
Date: 24/11/2022
*/
#include <stdio.h>

#define SIZE 3

int main()
{
    float fahrenheit[SIZE] = {0};
    float celsius[SIZE] = {0};

    int i;


    printf("Enter %d temps in Fahrenheit\n", SIZE);

    //Enter numbers into fahrenheit array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &fahrenheit[i]);
    }

    printf("\nConverting temps into corresponding Celsius ...\n\n");

    //Convert the fahrenheit temps into the corresponding celsius temps
    for(i = 0; i < SIZE; i++)
    {
        celsius[i] = ((fahrenheit[i] - 32)) * (5.0 / 9.0);

        // Display corresponding temps in both arrays
        printf("Fahrenheit %.1f = Celsius %.1f\n", fahrenheit[i], celsius[i]);
    }

    return 0;

} // end main()