/*
Author: Chris Noblett
Program description: Using a structure to store flight details for 2 people and display them.
Date: 28/03/2023
*/
#include <stdio.h>
#include <string.h>
#define SIZE 20

struct airline_rec
{
char airlineName[SIZE];
int flightNumber;
char surname[SIZE];
int seatNumber;
char destination[SIZE];
int numBags;



};

void enter(struct airline_rec *, struct airline_rec *);
void display(struct airline_rec, struct airline_rec);
int main()
{
    struct airline_rec person1,person2;




    enter(& person1, & person2);
    display(person1,person2);
    return 0;
}


void enter(struct airline_rec *ptr1, struct airline_rec *ptr2)
{
    //Person 1
    printf("Person 1\n");
    printf("\nEnter your airline name: ");
    fgets(ptr1 -> airlineName, SIZE, stdin);

    printf("\nEnter your flight number: ");
    scanf("%d", & ptr1 -> flightNumber);

    printf("\nEnter your surname: ");
    getchar();
    fgets(ptr1 -> surname, SIZE, stdin);

    printf("\nEnter your seat number: ");
    scanf("%d", & ptr1 -> seatNumber);

    printf("\nEnter your destination: ");
    getchar();
    fgets(ptr1 -> destination, SIZE, stdin);

    printf("\nEnter the number of bags: ");
    scanf("%d", & ptr1 -> numBags);

    //Person 2
    printf("\n");
    printf("Person 2\n");
    printf("\nEnter your airline name: ");
    getchar();
    fgets(ptr2 -> airlineName, SIZE, stdin);

    printf("\nEnter your flight number: ");
    scanf("%d", & ptr2 -> flightNumber);

    printf("\nEnter your surname: ");
    getchar();
    fgets(ptr2 -> surname, SIZE, stdin);

    printf("\nEnter your seat number: ");
    scanf("%d", & ptr2 -> seatNumber);

    printf("\nEnter your destination: ");
    getchar();
    fgets(ptr2 -> destination, SIZE, stdin);

    printf("\nEnter the number of bags: ");
    scanf("%d", & ptr2 -> numBags);
    
}

void display(struct airline_rec person1, struct airline_rec person2)
{

    printf("\nPerson 1 Record\n");
    printf("Airline name:%s", person1.airlineName);
    printf("Flight number: %d", person1.flightNumber);
    printf("\nSurname: %s", person1.surname);
    printf("Seat number: %d", person1.seatNumber);
    printf("\nDestination: %s", person1.destination);
    printf("Number of bags: %d", person1.numBags);

    printf("\n\nPerson 2 Record\n");
    printf("Airline name:%s", person2.airlineName);
    printf("Flight number: %d", person2.flightNumber);
    printf("\nSurname: %s", person2.surname);
    printf("Seat number: %d", person2.seatNumber);
    printf("\nDestination: %s", person2.destination);
    printf("Number of bags: %d", person2.numBags);
}
