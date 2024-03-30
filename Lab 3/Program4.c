/*
Author: Chris Noblett
Program description: Exercise. Finding errors in code.
Date: 18/10/2022
*/

/*
#include <stdio.h>
main()
{
int num; //no indentation
printf("Please type a number followed by Enter") ;
scanf( "%f", num) ; //%f here is the wrong delimeter and &num is needed
printf( "The number you typed was: %d", num) ;
}
*/

// Solution
#include <stdio.h>
int main()
{
    int num;
    printf("Please type a number followed by Enter") ;
    scanf( "%d", &num) ; 
    printf( "The number you typed was: %d", num) ;
}

