/*
Author: Chris Noblett
Program description: Calculate the remainder of arithmetic operations using the modulus operator.
Date: 11/10/2022
*/
#include <stdio.h>
int main()
{
    int cal1;
    cal1 = 2%2;
    printf("%d\n", cal1);
    cal1 = 3%2;
    printf("%d\n", cal1);
    cal1 = 5%2;
    printf("%d\n", cal1);
    cal1 = 7%3;
    printf("%d\n", cal1);
    cal1 = 100%33;
    printf("%d\n", cal1);
    cal1 = 100%7;
    printf("%d\n", cal1);

return 0;
}