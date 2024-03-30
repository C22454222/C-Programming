/*
Author: Chris Noblett
Program description: 1-100 integer. Odd or even?
Date: 26/10/2022
*/
#include <stdio.h>
int main()
{
    
    int oe;

    printf("Enter an integer between 1 and 100: ");
    scanf("%d",&oe);

    if (oe % 2 == 0)
    { 
        printf("\n%c This number is even");
    }   
    else
    {
        printf("\n%c This number is odd");
    }




return 0;
}