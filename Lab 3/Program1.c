/*
Author: Chris Noblett
Program description: Basic inputs.
Date: 18/10/2022
*/
#include <stdio.h>
int main()
{
    float f1;
    float f2;
    float f3;


    printf(" Please enter three numbers: \n");
    printf ("\t" "First number please: \n");
    scanf("%f", &f1);
    printf ("\t" "Second number please: \n");
    scanf ("%f", &f2);
    printf("\t" "Third number please: \n");
    scanf("%f", &f3);
    return 0;
}