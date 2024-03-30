/*
Author: Chris Noblett
Program description: To get an input from the user and use the number to display the fibonacci sequence with that many terms.
Date: 08/11/2022
*/
#include <stdio.h>  
   
int main() 
{
    //Initialising integer variables.
    int inp1,inp2,total1,i;
    //Assigning the value 0 to total
    total1 = 2;
   
    i = 0;

    printf("Welcome to the Fibonacci series program\n"); //Printing out a small menu.
    do // Loop to let the user enter a number and display the fibonaccie sequence.
    {
        printf("Enter your selection: \n");
        printf("1. Enter the number of terms to display in the sequence and display the sequence.\n");
        printf("2. End Program\n");
        scanf("%d", &inp1); // Taking in input.

        
        if (inp1 == 1) // Conditioning the program for what the user inputs. 1 or 2. Accounts for errors aswell
        {
            printf("Enter the number of terms: ");
            scanf("%d", &inp2);
            while (i < inp2) 
            {
                
                total1 = (total1 -1) + (total1 -2);
                printf("\n%d\n", total1);
                
                
                i++;
            }


        }

        else if (inp1 == 2) // Helping end the program.
        {
            printf("The program has ended");
            break;
        }

        else // Accounting for errors
        {
            printf("That input is not valid. Please choose a number(1 or 2)");
        }
        
    }
    while (inp1 != 2); // Ends the program only when the user enters 2.

    


        return 0;
}
