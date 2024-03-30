/*
Author: Chris Noblett
Program description: Finding the volume of a cube. 
Date: 11/10/2022
*/
#include <stdio.h>
int main()
{
int height;
float length;
float width;
float volume;
float surfaceArea;

height = 2.8;
length = 2.8;
width = 2.8;
volume = height * length * width;

printf("The volume of the box is: %f\n", volume);

return 0;
}