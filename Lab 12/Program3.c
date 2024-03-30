/*
Author: Chris Noblett
Program description: Finding the highest value of three numbers. Returning the number that is greater than both
other numbers using conditional statements.
Date: 07/02/2023
*/
#include <stdio.h>
#define SIZE 3
int highest(int,int,int);
int main()
{
    int a,b,c,h;
    printf("Enter three numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    h = highest(a,b,c);
    printf("The highest value is %d", h);
    return 0;
}
int highest(int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else if(num3 > num1 && num3 > num2)
    {
        return num3;
    }
}
