/*
Author: Chris Noblett
Program description: Displaying the numbers(1-10) in descending order on the same line with each number separated by a comma.
Date: 01/11/2022
*/
#include <stdio.h>  
   
int main() 
{
    int i;
    i = 10;
    while(i>=1)
    {
        printf("%d",i);
        i--;
        if(i>0)
        {
            printf(",");      
        }   
    }
    return 0;
}