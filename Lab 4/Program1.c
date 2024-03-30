/*
Author: Chris Noblett
Program description: A check to see if a character is a vowel or not.
Date: 26/10/2022
*/
#include <stdio.h>
int main()
{
    
    char c1;

    printf("Enter a character please: ");
    scanf("%c",&c1);

    switch(c1)
    {
        case 'a':
        {
            printf("\n%c This is a vowel");
            break;
        }
   
        case 'e':
        {
            printf("\n%c This is a vowel");
            break;
        }
        case 'i':
        {
            printf("\n%c This is a vowel");
            break;
        }
        case 'o':
        {
            printf("\n%c This is a vowel");
            break;
        }
        case 'u':
        {
            printf("\n%c This is a vowel");
            break;
        }
        default:
        {
            printf("\n This is not a vowel");
            break;
        }

    }



    return 0;
}