/*
Author: Chris Noblett
Program description: Marriage status using switch.
Date: 26/10/2022
*/
#include <stdio.h>
int main()
{
    char marriage_status;
    printf("Please enter a marriage status: ");
    scanf("%c",&marriage_status);

    switch(marriage_status)
    {
        case 'S':
        {
            printf("Single");
            break;
        
        }
        case 'M':
        {
            printf("Married");
            break;
        
        }
        case 'W':
        {
            printf("Widowed");
            break;
        
        }
        case 'E':
        {
            printf("Separated");
            break;
        
        }
        case 'D':
        {
            printf("Divorced");
            break;
        
        }
        default:
        {
            printf("Error: invaild input");
            break;
        
        }















    }




return 0;
}