/*
Author: Chris Noblett
Program description: Using a pointer variable. Finding an address for a variable and printing the contents found at the memory address.
Date: 29/11/2022
*/
#include <stdio.h>

int main()
{
    // code
    int var1;
    int *ptr;
    var1 = 1;
    ptr = &var1;

    printf("the address of var1 is %p", &var1); // the %d should be %p
    printf("ptr contains %p", &ptr); /* there is a missing & and should be
    &ptr */
    printf("*ptr contains %d", *ptr); /* there is a missing * (indirection
    operator) and therefore should be *ptr */

    return 0;
}
