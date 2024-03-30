/*
Author: Chris Noblett
Program description: Is number one divisible by number two evenly. No remainder.
Date: 26/10/2022
*/
#include <stdio.h>
int main()
{
    int num1;
    int num2;

    printf("Enter an integer: ");
    scanf("%d",&num1);
    printf("Enter an integer: ");
    scanf("%d",&num2);

    if(num1 % num2 == 0)
    {
        printf("The number is evenly divisible ");
    }
    else
    {
        printf("The number is not evenly divisble");
    }
return 0;
}