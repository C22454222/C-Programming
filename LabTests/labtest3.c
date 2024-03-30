/*
Author: Chris Noblett.
Program description: Shamrock Air is an airline carrying passengers between Ireland and Europe. It needs a structure template to record
passenger's data and display it. This program utilizes a data structure called a structure. Question 1 creates the template for the main 
structure and thenested structure used for recording passenger's personal information and flight information. Data such as flight numbers,
flight dates, passenger's names, seat numbers and destinations are all entered and recorded. The flight numbers, passenger's names, seat numbers 
and destinations are all structured as strings. The date of the flight has its own structure. A nested structure containing the day, month and
year. This structure is put into the main structure with all the other data as integers. Question 2 uses pass by reference and a function 
called details(). This function takes in passenger information using the structures created from question 1. In main, two passenger variables
are created and their addresses are passed down as parameters to the function details(). Question 3 just displays this information. It just
uses pass by value.
Date: 28/03/2023.
*/
#include <stdio.h>
#include <string.h>
//Setting a symbolic name to represent the integer 20.
#define SIZE 100
//Question 1.
/*
This is my nested structure. It contains the date month and year all to be entered separately. This structure is contained as information
that needs to be recorded in the structure below it (airline_rec).
*/
struct date
{
    int day;
    int month;
    int year;
};

//Question 1.
/*
This is my main structure template. It contains 4 strings and a structure within it as data types. The SIZE in brackets after the name of 
the strings just states how many characters can be in the string including the null character. SIZE is set to 100 as a symbolic name.
*/

struct airline_rec
{
    //String
    char flightNumber[SIZE];
    //Nested structure
    struct date DOF;
    char surname[SIZE];
    char fname[SIZE];
    char seatNumber[SIZE];
    char destination[SIZE];

};

//Question 2.
/*
Here I have created my function for entering information into the structure. I'm passing down 2 pointers here as parameters because I'm
going to use pass by reference. I will pass down the addresses of two passenger variables that will be created in the main() function.
I will use a separate function to display the information of the passengers using pass by value.
*/
void details(struct airline_rec *, struct airline_rec *);

//Question 3.
/*
Here I create the display function that will display all my recorded information from both passengers. I use pass by value. The two
parameters are just going to be the passenger variables created in the main() function.
*/
void display(struct airline_rec, struct airline_rec);
//This function is just for creating the passenger variables and calling the details() function and display() function.
int main()
{
    //Question 2
    //Here I have created 2 variables. 2 passenger variables.
    struct airline_rec passenger1,passenger2;



    //Question 2
    /*
    Here I call the first function which will record all the information for the 2 passengers. There are 2 arguments. The addresses
    of the passenger variables are passed down to the function.
    */
    details(& passenger1, & passenger2);
    

    //Question 3
    //Here I call the second function which will display the information for the 2 passengers. There are 2 arguments.
    display(passenger1,passenger2);




    return 0;
}
//End of main.

//Question 2
//This function will record all the information for 2 passengers using the structure airline_rec template above.
void details(struct airline_rec *ptr1, struct airline_rec *ptr2)
{
    //Details for passenger 1.
    printf("Passenger 1\n");
    printf("-----------");
    printf("\nEnter your flight number: ");
    //fgets prompts the user to enter a string using standard input with a maximum input length of SIZE which = 100 including null character.
    fgets(ptr1 -> flightNumber, SIZE, stdin);
    //We enter data from the nested structure in an order and using separate scanf() functions.
    printf("\nEnter the flight date(day,month,year): \n");
    scanf("%d", & ptr1 -> DOF.day);
    scanf("\n%d", & ptr1 -> DOF.month);
    scanf("\n%d", & ptr1 -> DOF.year);

    printf("\nEnter your surname: ");
    getchar(); //This clears the input buffer so the enter key is not being read.
    fgets(ptr1 -> surname, SIZE, stdin); //Here I'm using pointer notation. I'm pointing to the address location of the string surname.
    //I'm recording the data.

    printf("\nEnter your first name: ");
    fgets(ptr1 -> fname, SIZE, stdin);

    printf("\nEnter your seat number: ");
    fgets(ptr1 -> seatNumber, SIZE, stdin);

    printf("\nEnter your destination: ");
    fgets(ptr1 -> destination, SIZE, stdin);

    //Details for passenger 2.
    printf("-----------\n");
    printf("Passenger 2\n");
    printf("-----------");
    printf("\nEnter your flight number: ");
    fgets(ptr2 -> flightNumber, SIZE, stdin);

    printf("\nEnter the flight date(day,month,year): \n");
    scanf("%d", & ptr2 -> DOF.day);
    scanf("\n%d", & ptr2 -> DOF.month);
    scanf("\n%d", & ptr2 -> DOF.year);

    printf("\nEnter your surname: ");
    getchar();
    fgets(ptr2 -> surname, SIZE, stdin);

    printf("\nEnter your first name: ");
    fgets(ptr2 -> fname, SIZE, stdin);

    printf("\nEnter your seat number: ");
    fgets(ptr2 -> seatNumber, SIZE, stdin);

    printf("\nEnter your destination: ");
    fgets(ptr2 -> destination, SIZE, stdin);
}
//End of details().

//Question 3
//Function display is used to display the contents of 2 structure variable parameters.
void display(struct airline_rec passenger1, struct airline_rec passenger2)
{
    printf("--------------------");
    printf("\nPassenger 1 record\n");
    printf("--------------------\n");
    printf("Flight number: %s", passenger1.flightNumber); // Prints out the first passenger flightnumber. The second one must be printed separately.
    printf("Flight date:");
    printf("\nDay: %d", passenger1.DOF.day); // Must include the structure variable and the nested structure for the date.
    printf("\nMonth: %d", passenger1.DOF.month);
    printf("\nYear: %d", passenger1.DOF.year);
    printf("\nSurname: %s", passenger1.surname); //Structure variable included with structure template variable.
    printf("First name: %s", passenger1.fname);
    printf("Seat number: %s", passenger1.seatNumber);
    printf("Destination: %s", passenger1.destination);
    printf("--------------------");
    printf("\nPerson 2 Record\n");
    printf("--------------------\n");
    printf("Flight number: %s", passenger2.flightNumber); //Passenger 2 information is printed out here separately.
    printf("Flight date:");
    printf("\nDay: %d", passenger2.DOF.day);
    printf("\nMonth: %d", passenger2.DOF.month);
    printf("\nYear: %d", passenger2.DOF.year);
    printf("\nSurname: %s", passenger2.surname);
    printf("First name: %s", passenger2.fname);
    printf("Seat number: %s", passenger2.seatNumber);
    printf("Destination: %s", passenger2.destination);
}
//End of display().