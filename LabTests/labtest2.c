/*
Author: Chris Noblett
Program description: This program is designed for currency exchange using dollars and euros. A menu is displayed giving a user options.
They can convert from both euros to dollars and dollars to euros. Option 1 will convert from dollars to euros. Option 2 will convert from
euros to dollars. 2 floating point arrays are used to get 3 amounts from the user. These are converted using functions outside of main.
The converted values are then shown when the functions are called in main along with the average of the converted amounts. The program ends
when a user enters 3 in the menu.
Date: 21/02/2023
*/
#include <stdio.h>

//Symbolic name setting a value to three for my for loops.
#define SIZE 3 

//Creating 2 functions. First one converts dollars to euros. Second one does the opposite
float change_to_Euro(float[]);

float change_to_Dollar(float[]);

//Main function
int main()
{
    int inp1; //This variable is for getting a user input for the menu options below. 1,2 or 3.
    int i; //This is my counter variable I use for my arrays and for loops.
    float euro[SIZE]; //This array takes in three amounts in dollars. Using my symbolic name here aswell. SIZE.
    float dollar[SIZE]; // This array takes in three amounts in euros.
    float mean1,mean2; //These variables are used for when I return data from my functions respectively.
    mean1 = 0; //Set to 0.
    mean2 = 0;

    do //Do while loop is used to create a menu and to run through the menu until the number 3 is entered.
    {
        printf("1.Euro\n");
        printf("2.Dollar\n");
        printf("3.Exit Program\n");
        printf("Please enter an option 1-3: \n"); //Taking input from a user.
        scanf("%d",&inp1);


        switch(inp1) //Using a switch statement for all three cases. The user enters 1,2 or 3.
        {
            case 1:
                printf("Enter three amounts using that currency: \n");
                for (i=0; i<SIZE ;i++) //Taking three amounts into the array,.
                {
                    scanf("%f", &euro[i]);
                }
                mean1 = change_to_Euro(euro); //Calling the function and getting the data that has been returned from the change_to_Euro().
                printf("The average of the amounts is %.2f euro\n", mean1); //Printing the returned data.
                //This is used so it breaks out of the case after the code has been executed.
                break;
                
            case 2: //Case 2 is the exact same just using the conversion euro to dollar instead.
                printf("Enter three amounts using that currency: \n");
                for (i=0; i<SIZE ;i++)
                {
                    scanf("%f", &dollar[i]);
                }
                mean2 = change_to_Dollar(dollar);
                printf("The average of the amounts is $%.2f\n", mean2);
                break; 

            
            case 3: //This will print a message to the user confirming that the program is no longer running.
                printf("You have exited the program thank you.");
                
                break;
        }
    } 
    while (inp1 != 3); //This is the while condition for when the menu will stop looping.
    
    return 0;
}

float change_to_Euro(float arrayEuro[])
{
    int j; //Counter variable.
    float rate,sum1,average1; //Rate is a variable for converting from one currency to another.
    sum1 = 0; //Sum is used to add all the converted amounts together.
    average1 = 0; //Average is used to divide the sum by the number of amounts. Sum/3.
    rate = 0.9; //Assigning rate a value.

    for (j=0; j<SIZE ;j++) //Loops through the array to convert each amount from dollar to euro and add to the sum.
    {
        printf("$%.2f\t", arrayEuro[j]);
        arrayEuro[j] = arrayEuro[j] * rate;
        printf("%.2f euro\n", arrayEuro[j]);
        sum1 = sum1 + arrayEuro[j];
    }
    
    average1 = sum1 / SIZE; 
        
    return average1; //Average is returned to where the function is called in main.
}

float change_to_Dollar(float arrayDollar[]) //Everything is the exact same here. Just converting from euros to dollars instead.
{
    int k;
    float convert,sum2,average2; //Convert is the same as the rate variable in the change_to_Euro function above.
    sum2 = 0;
    average2 = 0;
    convert = 1.1;
    for (k=0; k<SIZE ;k++)
    {
        printf("%.2f euro\t", arrayDollar[k]);
        arrayDollar[k] = arrayDollar[k] * convert;
        printf("$%.2f\n", arrayDollar[k]);
        sum2 = sum2 + arrayDollar[k];
    }

    average2 = sum2/SIZE;
    
    
    
    
    return average2;
}
