/*
Author: Chris Noblett
Program description: Finding the area of a circle.
Date: 11/10/2022
*/
#include <stdio.h>
int main()
{
    float radius;
    const float pi;
    float circleArea;

radius = 4.8;
pi = 3.14;
circleArea = pi*(radius*radius);
printf("The area of the cirle is: %f", circleArea);

return 0;
}