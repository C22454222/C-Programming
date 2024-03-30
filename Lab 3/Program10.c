/*
Author: Chris Noblett
Program description: Input 3 floats. Calculate their sum and average.
Date: 18/10/2022
*/
#include <stdio.h>
int main()
{
    float f1;
    float f2;
    float f3;
    float s1;
    float a1;
    printf("First number please: ");
    scanf("%f",&f1);
    printf("Second number please: ");
    scanf("%f",&f2);
    printf("Thirdnumber please: ");
    scanf("%f",&f3);
    s1 = f1+f2+f3;
    a1 = (f1+f2+f3)/3;
    printf("The sum of the three numbers are: %f \n", s1);
    printf("The average of the three numbers are: %f", a1);
    return 0;
}