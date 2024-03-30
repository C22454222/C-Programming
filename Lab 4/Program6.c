/*
Author: Chris Noblett
Program description: Take in a single numeral from the keyboard and display the value as a word.
Date: 26/10/2022
*/
   
#include <stdio.h>  
   
int main() {  
    int num1;

    printf("Enter a single number 0-9\n");  
    scanf("%d", &num1);

    switch(num1)
    {
        case 0:
        {
            printf("Zero");
            break;
        }
        case 1:
        {
            printf("One");
            break;
        }
        case 2:
        {
            printf("Two");
            break;
        }
        case 3:
        {
            printf("Three");
            break;
        }
        case 4:
        {
            printf("Four");
            break;
        }
        case 5:
        {
            printf("Five");
            break;
        }
        case 6:
        {
            printf("Six");
            break;
        }
        case 7:
        {
            printf("Seven");
            break;
        }
        case 8:
        {
            printf("Eight");
            break;
        }
        case 9:
        {
            printf("Nine");
            break;
        }
        default:
        {
            printf("Invalid input");
            break;
        }





    }

   
    return 0;  
}