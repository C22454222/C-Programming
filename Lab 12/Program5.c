/*
Author: Chris Noblett
Program description: Pass by value. Trying to increment a number using it as a parameter for another function.
Date: 07/02/2023
*/

#include <stdio.h>
// Function signature
int fxn1(int);
int main()
{
    int num = 0;
    printf("Enter any number\n");
    scanf("%d", & num);
    //Pass a COPY of variable num to the function
    fxn1(num);
    printf("\nnum contains %d", num);
    return 0;
} // end main()
// fxn1() changes the contents of the parameter
int fxn1(int n1)
{
    printf("\nn1 contains %d\n", n1);
    //increment n1
    n1 = n1 + 2; // n1 = n1 + 1;
    printf("\nn1 contains %d\n", n1);
    return n1;
} // end fxn1()
