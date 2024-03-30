/*
Author: Chris Noblett
Program description: Numbers 1-7 corresponding with days of the week. Error message should be displayed if number is outside range.
Date: 26/10/2022
*/
#include <stdio.h>  
   
int main() {  
    int day;
    
    printf("Enter a single number 1-7: \n");  
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        {
            printf("Sunday");
            break;
        }
        case 2:
        {
            printf("Monday");
            break;
        }
        case 3:
        {
            printf("Tuesday");
            break;
        }
        case 4:
        {
            printf("Wednesday");
            break;
        }
        case 5:
        {
            printf("Thursday");
            break;
        }
        case 6:
        {
            printf("Friday");
            break;
        }
        case 7:
        {
            printf("Saturday");
            break;
        }
        default:
        {
            printf("Error: Number lies outside of range");
        }









    }
   
    return 0;  
}