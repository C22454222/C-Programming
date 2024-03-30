/*
Author: Chris Noblett
Program description: Inputting 2 numbers and calculating the sum using only pointers.
Date: 06/12/2022
*/
#include<stdio.h>



int main()
{
    int num1,num2,sum;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;

    printf("Enter 2 numbers: \n");
    scanf("%d\n%d", &num1, &num2);
    printf("\n%d\n", *ptr1);
    printf("%d\n", *ptr2);
    *ptr3 = *ptr1 + *ptr2;
    printf("\nSum is %d\n",*ptr3);






    return 0;
}