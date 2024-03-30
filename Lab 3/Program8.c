/*
Author: Chris Noblett
Program description: Taking in an age and displaying the total amount of heartbeats in a lifetime using someone's age.
Date: 18/10/2022
*/
#include <stdio.h>
int main()
{
    int age;
    float days;
    float hours;
    float mins;
    float bpm;

    
    printf("First number please: ");
    scanf("%d",&age);
    days= age*365;
    hours = days*24;
    mins = hours*60;
    bpm = mins*75;
    printf("Beats in your life: %f\n", bpm);


    
return 0;
}