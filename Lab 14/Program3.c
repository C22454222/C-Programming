/*
Author: Chris Noblett
Program description: Printing strings with different functions. Printf() and puts().
Date: 28/02/2023
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
int main()
{
    char word1[] = {'W','o','r','d','\0'}; //(i)
    puts(word1);
    char word2[] = "Word"; //(ii)
    printf("%s", word2);


    return 0;
}