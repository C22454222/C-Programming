/*
Author: Chris Noblett
Program description: Making one variable of each data type.
Assign them.
Print what they contain with their respected delimeters,
Date: 11/10/2022
*/
#include <stdio.h>
int main()
{
int num1;
float f1;
char c1;

num1 = 1;
f1 = 1.5;
c1 = 'C';

printf("num1 contains %d\nf1 contains %f\nc1 contains %c",num1, f1, c1);

return 0;
}