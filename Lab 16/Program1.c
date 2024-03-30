/*
Author: Chris Noblett
Program description: Counting vowels in a sentence. Counting characters in a sentence. Adding 2 strings together.
Date: 14/03/2023
*/
#include <stdio.h>
#include <string.h>
#define SIZE 50

void count(char *str, char *sentence);
int main()
{
    char str[SIZE];
    char sentence[40] = "I entered the string ";
    printf("Please enter a sentence: \n");
    fgets(str, SIZE, stdin); 

    count(str,sentence);

    return 0;
}

void count(char *str,char *sentence) //(a)
{
    int sum,i,length;
    length = strlen(str); //(b)
    sum = 0;
    for (i=0;i<length;i++)
    {
        if (str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str [i]=='o' || str[i]=='U' || str[i]=='u')
        {
            sum++;
        }
    }
    printf("There is %d vowels in the sentence\n", sum);
    printf("There is %d characters in the sentence\n",length-1);
    strcat(sentence,str); //(c)
    printf("%s",sentence);
}
