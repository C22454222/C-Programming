/*
Author: Chris Noblett
Program description: Finding the sum of five integers. 
Finding the average of the five numbers.
Date: 11/10/2022
*/
#include <stdio.h>
int main()
{
int num1, num2, num3, num4, num5;
int total;
int average;

num1 = 1;
num2 = 2;
num3 = 3;
num4 = 4;
num5 = 5;

total = num1 + num2 + num3 + num4 + num5;
printf("The sum of the integers 1-5 gives: %d\n",total);
average = total / 5 ;
printf("The average number from the integers 1-5: %d\n", average);

return 0;
}