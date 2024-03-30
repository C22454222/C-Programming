/*
Author: Chris Noblett
Program description: Finding the average of three numbers. Returning the value of the average to the main().
Date: 07/02/2023
*/
#include <stdio.h>
#define SIZE 3

int average(int,int,int);

int main()
{
    int n1,n2,n3;
    int i;
    int av;
    printf("Enter three numbers: \n");
    scanf("%d\n", &n1);
    scanf("%d\n", &n2);
    scanf("%d", &n3);
    
    av = average(n1,n2,n3);
    printf("The average from the three values is: %d", av);




    return 0;
}

int average(int num1,int num2,int num3)
{
    int a1,sum;
    sum = num1 + num2 + num3;
    a1 = sum / SIZE;
    return a1;
}
