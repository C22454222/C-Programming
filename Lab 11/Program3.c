/*
Author: Chris Noblett
Program description: Creating a function to find the highest and lowest of three ints. 3 parameters needed.
Date: 31/01/2023
*/

void high(int, int, int);

#include <stdio.h>


int main()
{

    int num1, num2, num3;
    num1 = 1;
    num2 = 2;
    num3 = 3;

    high(num1, num2, num3);
    return 0;
}

void high(int y, int z, int x)
{

    if (x > y && x > z)
    {
        printf("The Highest values is x\n\n");
    }

    if (y < x && y < z)
    {
        printf("The Lowest value is y");
    }
}