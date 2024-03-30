/*
Author: Chris Noblett
Program description: Using a structure to store bio details.
Date: 28/03/2023
*/
#include <stdio.h>
#include <string.h>
#define SIZE 20

struct date
{
    int day;
    int month;
    int year;
};

struct bio
{
    char fname[SIZE];
    char sname[SIZE];
    struct date DOB;
    int height;
    int weight;
    char eye[SIZE];
    char country[SIZE];

};

int main()
{
    //Enter
    struct bio person1;
    printf("Person 1\n");
    printf("\nEnter first name: ");
    fgets(person1.fname,SIZE,stdin);

    printf("\nEnter surname: ");
    fgets(person1.sname,SIZE,stdin);

    printf("\nEnter date of birth");
    printf("\nDay,month,year: ");
    scanf("\n%d", & person1.DOB.day);
    scanf("\n%d", & person1.DOB.month);
    scanf("\n%d", & person1.DOB.year);

    printf("\nEnter your height: ");
    scanf("%d",& person1.height);

    printf("\nEnter your weight: ");
    scanf("%d",& person1.weight);

    printf("\nEnter eye colour: ");
    getchar();
    fgets(person1.eye,SIZE,stdin);
    
    printf("\nEnter country of origin: ");
    fgets(person1.country,SIZE,stdin);

    //Display

    printf("\nPerson 1 Record\n");
    printf("First name: %s", person1.fname);
    printf("Surname: %s", person1.sname);
    printf("Date of Birth:");
    printf("\nDay %d", person1.DOB.day);
    printf("\nMonth %d", person1.DOB.month);
    printf("\nYear %d", person1.DOB.year);
    printf("\nHeight: %dcm", person1.height);
    printf("\nWeight: %dkg", person1.weight);
    printf("\nEye colour: %s", person1.eye);
    printf("Country of origin: %s", person1.country);






    return 0;
}