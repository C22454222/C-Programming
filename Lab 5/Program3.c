/*
Author: Chris Noblett
Program description: Finding out if a number between (1-20) is divisible by a number of choice between(1-5).
Date: 01/11/2022
*/
#include <stdio.h>  
   
int main() 
{
    int num1, i;
    printf("Enter a number between 1 and 5: ");
    scanf("%d", &num1);

    for (i=1 ; i<=20; i++)
    {
        if (i % num1 == 0)
        {
            printf("%d is divisible by %d with no remainder\n", i, num1);
        }
        else
        {
            printf("%d is not divisible by %d with no remainder\n",i,num1);
        }
    }






    
    return 0;
}