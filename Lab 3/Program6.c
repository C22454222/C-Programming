/*
Author: Chris Noblett
Program description: Taking in four numbers and displaying them in reverse order.
Date: 18/10/2022
*/
#include <stdio.h>
int main()
{
   
    float f1;
    float f2;
    float f3;
    float f4;

    printf ( "First number please: ");
    scanf("%f", &f1);
    printf ( "Second number please: ");
    scanf (" %f", &f2);
    printf( "Third number please: ");
    scanf("%f.", &f3);
    printf( "Fourth number please: ");
    scanf("%f", &f4);

    printf("In reverse order: \n");
    printf("You entered %f \n" , f4);
    printf("You entered %f \n" , f3);
    printf("You entered %f \n" , f2);
    printf("You entered %f \n" , f1);


    
return 0;
}