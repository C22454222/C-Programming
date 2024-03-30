/*
Author: Chris Noblett
Program description: Decimal inputs with rounding.
Date: 18/10/2022
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float f1;
    float f2;
    float f3;


    printf(" Please enter three numbers: \n");
    //Getting 3 inputs from a user using scanf();

    printf ( "First number please: \n");
    scanf("%f", &f1);
    //Rounding to 4,3 and 0 decimal places respectively.
    printf("You entered %.4f \n" , f1);
    printf ( "Second number please: \n");
    scanf ("%f", &f2);
    printf("You entered %.3f \n" , f2);
    printf( "Third number please: \n");
    scanf("%f.", &f3);
    printf("You entered %.0f \n" , f3);
return 0;
}
