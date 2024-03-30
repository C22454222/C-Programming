/*
Author: Chris Noblett
Program description: Finding the volume of a box. 
Finding the surface area of a box.
Date: 11/10/2022
*/
#include <stdio.h>
int main()
{
int height = 10;
float length = 11.5;
float width = 2.5;
float volume = 0;
float surfaceArea = 0;

volume = height * length * width;
surfaceArea = ((length * height)* 2) + ((width * length)*2) + ((height * width)*2);

printf("The volume of the box is: %.1f\n", volume);
printf("The surface area of the box is: %f\n", surfaceArea);
return 0;
}