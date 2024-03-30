/*
Author: Chris Noblett
Program description: Using pointer notation to copy contents of one array into another. *(a+i).
Date: 06/12/2022
*/

#include <stdio.h>
#define SIZE 3

int main()
{

    int a[SIZE];
    int b[SIZE];
    int i;

    //Entering values into the array using pointer notation
    printf("Enter 3 integers: \n");
    for (i=0;i<SIZE;i++)
    {
        scanf("%d", & *(a+i));
        *(b+i) = *(a+i);
    
    }
    
    printf("\nCopying contents of first array into the second one... \n");

     for (i=0;i<SIZE;i++)
    {
        printf("\n%d\n",*(b+i));
    
    }


    return 0;
}