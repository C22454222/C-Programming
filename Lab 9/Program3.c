/*
Author: Chris Noblett
Program description: Floats and pointers. Content and addresses. Memory allocation.
Date: 06/12/2022
*/
#include <stdio.h>
int main()
{
    float inp1, inp2;
    float *ptr1;
    float *ptr2;
    printf("Enter two numbers: \n");
    scanf("%f\n%f", &inp1, &inp2);
    //(a)
    printf("%p\n",&inp1);
    printf("%p\n\n",&inp2);
    //(b)
    printf("%p\n", &ptr1);
    printf("%p\n", &ptr2);
    //(c)
    ptr1 = &inp1;
    ptr2 = &inp2;
    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    //(d)
    printf("%f\n", *ptr1);
    printf("%f\n", *ptr2);






    return 0;
}