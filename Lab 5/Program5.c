/*
Author: Chris Noblett
Program description: Lists all even numbers from 1-100.
Date: 01/11/2022
*/
#include <stdio.h>  
   
int main() 
{
    int i;
    for (i=1 ; i<=100; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d",i);
            if (i<100)
        { 
            printf(",");
        }  
        }
        else
        {
            printf("");
        }          
    }
    return 0;
}