/*
Author: Chris Noblett
Program description: Finds the length of a sentence and also appends the first sentence onto the end of the 2nd sentence.
Date: 07/03/2023
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
    char sentence[SIZE] = "I like computer science";
    char sentence2[SIZE] = "My sentence is: ";
    int length = 0;
    length = strlen(sentence);
    printf("\n%d characters in the sentence\n", length);
    strcat(sentence2,sentence);
    printf("%s", sentence2);
    return 0;
}