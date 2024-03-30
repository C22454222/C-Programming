/*
Author: Chris Noblett
Program description: Converting Fahrenheit to Celcius.
Date: 18/10/2022
*/
#include <stdio.h>
int main()
{
    float f1;
    float c;
    printf("Enter a temperature in degrees Fahrenheit: \n");
    scanf("%f",&f1);
    c = (f1-32.0)*(5.0/9.0);
    printf("In degrees celcius: %f\n", c);

    return 0;
}