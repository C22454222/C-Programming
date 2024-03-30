/*
Author: Chris Noblett
Program description: Testing strings with print functions and array functionality.
Date: 28/02/2023
*/
//Program 1,2 and 3 all in one
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    //Q1
    printf("%5s\n", "abcd"); 
    printf("%5s\n", "abcdef");
    printf("%-5s\n", "abc");
    printf("%5.2\n", "abcde");
    printf("%-5.2\n", "abcde");
    
    //Q2
    char name[] = {'R','o','b','e','r','t'};
    //puts(name); It displays the string with a random character at the end.
    //scanf("%s",&name); Doesn't display string. Asks for a string.
    //strcpy(name, "Philip"); Won't change the string because a variable has not been declared so the function call can be assigned to it.
    //*(name + 5) = "a"; Assignment makes integer from pointer without a cast.
    //name = "Philip"; Assignment to expression with array type. 

    //Q3
    char *text = "some text";
    printf("%s\n", text);
    printf("%c\n",*text);
    printf("%c\n", *"more text");
    printf("%c\n", *(text+1));
    printf("%s\n", text+1);
    printf(text);
    *(text+4)='\0' ; printf("\n%s\n", text);
    printf("%c\n", "text"[2]);
    printf("%s\n", "text"+2);

    return 0;
}