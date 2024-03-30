/*
Author: Chris Noblett
Program description: Using a function to find out if a number is even or odd. Returns 1 if it is even. Returns 0 if it is odd.
Date: 07/02/2023
*/
#include <stdio.h>

int evenOdd(int);

int main(void)
{
    int num = 0;
    int check = 0;

    printf("Enter any positive number\n");
    scanf("%d", &num);

    // Check if the number is Even or Odd
    check = evenOdd(num);

    if(check == 1)
    {
        printf("\nEven");
    }
    else
    {
        printf("\nOdd");
    }

  return 0;
  
} // end main()

// Function to take an integer parameter and check if it is even or odd
int evenOdd(int number)
{
    // get the modulus by 2 and check if zero
    if( (number % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

} // end evenOdd()
