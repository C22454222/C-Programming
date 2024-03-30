/*
Author: Chris Noblett
Program description: Exercise. One input for lots of variables.
Date: 18/10/2022
*/
#include <stdio.h>
int main()
{
    int first;
    int second, third, fourth;
    int i;
    float f;
    float principal, rate, time;
    char keyval1, keyval2;
    char c;
    double d;
    printf("Enter a 5 integers, 4 floats, 3 characters and a double: ");
    scanf( "%d %d %d %d %d %f %f %f %f %c %c %c %lf", &first, &second, &third, &fourth, &i, &f, &principal, &rate, &time, &keyval1, &keyval2, &c, &d);


    return 0;
}