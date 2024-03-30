/*
Author: Chris Noblett
Program description: Pass by reference. Finding the area of a square and circle.
Date: 14/02/2023
*/

#include <stdio.h>

void asquare(int *);
void acircle(float *);
int main()
{
    int length;
    float r;
    printf("Enter a length of square: \n");
    scanf("%d",&length);
    printf("Enter a radius of a circle: \n");
    scanf("%f",&r);
    
    asquare(&length);
    acircle(&r);
    printf("\nThe area of the square is: %d\n", length);
    printf("\nThe are of the circle is: %f", r);


    return 0;
}

void asquare(int *n1)
{
    (*n1) = (*n1) * (*n1);


}

void acircle(float *n2)
{
    (*n2) = (3.14) * (*n2)*(*n2);


}
