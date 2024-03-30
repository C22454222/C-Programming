/*
Author: Chris Noblett
Program description: Finding the common character from 3. Returns the most common char to main.
Date: 07/02/2023
*/
#include <stdio.h>

char commonChar(char, char, char);

int main(void)
{
    char c1, c2, c3;
    char common;

    printf("Enter any 3 characters\n");
    scanf("%c", &c1);

    // clear input buffer
    while(getchar() != '\n');

    scanf("%c", &c2);
    // clear input buffer
    while(getchar() != '\n');

    scanf("%c", &c3);

    // find the most common characters
    common = commonChar(c1, c2, c3);

    printf("\nThe common char is %c", common);
  
  return 0;

} // end main()

//Function used to find the most common character
//
char commonChar(char ch1, char ch2, char ch3)
{
    if(ch1 == ch2 || ch1 == ch3)
    {
        return ch1;
    }
    else if (ch2 == ch3 || ch2 == ch1)
    {
        return ch2;
    }
    else
    {
        return ch3;
    }

} // end commonChar()