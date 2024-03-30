/*
Author: Chris Noblett
Program description: Various operations with pointers aswell as manually assigning pointers and variables to
memory addresses.
Date: 29/11/2022
*/
#include <stdio.h>

int main() 
{
    // code
    
    int var1;
    //(c)
    int num1;
    num1 = 10;
    //(a) (b)
    int *ptr = (int *)0xF176BA2;
    int a = 22;
    //(c) (d)
    int *p = &a;
    //(e)
    int number;
    number = 10;
    *&number = (int *)0xFB6546;
    printf("%d\n", number);

    printf("ptr = %u\n", ptr);
    printf("p = %u\n", p); // p = 6422288
    p++;
    printf("p++ = %u\n", p); //p++ = 6422292    +4   // 4 bytes
    var1 = 1;



    printf("the address of var1 is %p", &var1); // the %d should be %p
    printf("ptr contains %p", &ptr); /* there is a missing & and should be
    &ptr */
    printf("*ptr contains %d", *ptr); /* there is a missing * (indirection
    operator) and therefore should be *ptr */


    

    return 0;
}