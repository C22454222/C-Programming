/*
Author: Chris Noblett
Program description: Pointers. Printing addresses and content of pointers and variables.
Date: 06/12/2022
*/
#include <stdio.h>
int main()
{
    int num1;
    char char1='C';
    int *ptr1;
    char *ptr2;
    num1 = 1;
    ptr1 = &num1;
    ptr2 = &char1;
    //(a)
    printf("the content of num1 is %d", num1);
    printf("\n");
    printf("the content of char1 is %c", char1);
    printf("\n");
    printf("the address of num1 is %p", &num1);
    printf("\n");
    printf("the address of char1 is %p", &char1);
    printf("\n");
    //(b)
    printf("\n");
    printf ("%p",ptr1);
    printf("\n");
    printf ("%p",ptr2);
    printf("\n");
    //(c)
    printf("ptr1 contains %d", *ptr1);
    printf("\n");
    printf("ptr1 contains %c", *ptr2);




    return 0;
}