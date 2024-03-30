/*
Author: Chris Noblett
Program description: Pass by reference. Trying to increment a number using it as a parameter for other function.
Date: 07/02/2023
*/

#include <stdio.h>
// Function signature
// The parameter is telling the compiler that when the function
// is called, the memory address of the parameter will be passed
void fxn1(int *);
int main()
{
    int num = 0;
    printf("Enter any number\n");
    scanf("%d", & num);
    //Pass the ADDRESS of variable num to the function
    fxn1(&num);
    printf("\nnum contains %d", num);
    return 0;
} // end main()
// fxn1() uses the address location of num, which is passed to
// this function and accesses its contents using the dereference
// operator
void fxn1(int *n1)
{
    printf("\nn1 contains %d\n", *n1);
    //increment n1
    (*n1)++; // n1 = n1 + 1;
    printf("\nn1 contains %d\n", *n1);
} // end fxn1()