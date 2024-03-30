/*
Author: Chris Noblett(C22454222).

Program description: Developing a C program to enable bank customers to manage their
Personal Identification Number (PIN) on an Automated Teller Machine (ATM). The
program displays a simple recurring menu with an option at the end to terminate the
program. By pressing 1 in the menuit will allow you to verify your pin. It checks if the
set pin is the one you have entered. By pressing 2 it will allow you to change
your pin by entering a new pin and then re-entering the pin. If both pins
match, the program will allow you to change the pin which can be verified again by
pressing 1 in the menu. By pressing 3 in the menu you can see the total number of 
times you have entered the pin correctly and incorrectly from using option 1. By 
pressing 4 in the menu, you will terminate the program which is irreversible. The
program accounts for input errors within reason. 

Date: 01-19/11/2022.
*/
#include <stdio.h>  
   
int main() 
{
    //Initialising variables at the start as you always should.
    int pnum, inp1, opt1, opt2, i, j;

    
    
    //Assigning the pin to a specific integer which can be changed and tested during the running of the program.
    pnum = 1234;
    
    
    // These two variables are used as counters. They count how many times the PIN is entered correctly and incorrectly respectively.
    i = 0;
    j = 0;
    printf("Welcome to the ATM, bank customer. Here you can manage your PIN number.\n");
    
    // Creating the recurring menu using a do while loop with 4 options.
    do
    {   
        printf("1. Enter PIN and verify correct\n");
        printf("2. Change PIN\n");
        printf("3. Display the number of times the PIN was entered (i) Successfully (ii)Incorrectly\n");
        printf("4. Exit Program\n\n");
        printf("Side note. When you go back to the menu after one iteration, any invalid input will bring you back into the previous selection from your first iteration. Be careful.\n\n");
    
    //Getting an input from the user between the options (1-4).
        printf("Enter a number (1-4) to select an option from the menu: \n");
        scanf("%d", &inp1);
        while(getchar() != '\n');
    /*This accounts for any value that is not (1-4). It will display whatever the user inputs along with an error message. They will
    be asked to enter an input again. It ignores characters.
    */

        
              
    // The switch statement with the cases here accounts for options (1-4) that the user can choose.   
        switch (inp1)
        {
            
            // This case verifies if the PIN you enter is correct or incorrect using conditional statements.
            case 1:
                printf("Please enter your PIN: ");
                //Taking the input from the user.
                scanf("%d", &opt1);
                //It ignores characters.
                while(getchar() != '\n');
                
                //If the entered pin is equal to the originally set pin then the following message is displayed.
                if (opt1 == pnum)
                {
                    printf("\nThat PIN is correct.\n\n");
                    
                    // 1 is added to account for the correct PIN input.
                    i++;
                    break; 
                }
                //This is displayed if the 2 pins aren't matching.
                else
                {
                    printf("\nThat PIN is incorrect.\n\n");

                    // 1 is added to account for the incorrect PIN input.
                    j++;
                    break;
                }
                break;
                // This breaks out of the loop and brings the menu back for the user to choose between the options(1-4).
                
            
            // This case gets you to change your PIN and verify the new pin. Takes 2 inputs in. They have to be equal. 
            case 2:
                printf("Your new PIN must be somewhere from (0000-9999) and it has to be 4 digits exactly. Please enter your new PIN and then re-enter it for verification: \n");
                scanf("%d\n",&opt2);
                scanf("%d",&opt1);
                while(getchar() != '\n');
                //This accounts for when the 2 inputs are the same. The pin can then be changed.
                if (opt2 == opt1)
                {
                    printf("This is your new PIN.\n\n");
                    //The original pin is set to this new pin.
                    pnum = opt1;
                }
                //This accounts for when the 2 inputs aren't the same.
                else
                {
                    printf("Error. The PIN has not been changed. Make sure both PINS match exactly and that the PIN contains integers only.\n\n");

                        
                }
                
                break; 

            // This case prints out the number of times the PIN was entered correctly and incorrectly with the variables i and j.
            case 3:
            //The delimeter and the matching variable at the end of the print statements output the number on the counter.
                printf("The number of times the PIN has been entered correctly: %d\n", i);
                printf("The number of times the PIN has been entered incorrectly: %d\n\n", j);
                
                break;
            
            //This will just output an exit message in conjunction with the termination of the while loop since the input is 4.
            case 4:
                printf("You have exited the program\n");

                break;
            
            /*This is used for error checking. If a number outside the range of 1-4 is entered this will display an error message.
            The user will be asked to enter an input again.
            */
            default:
                printf("Error. Please enter a valid input.\n\n");
                
                break;
        }
    }

    // This is the second part of the do while loop. The menu will keep displaying until the integer 4 is entered in the menu.
    while (inp1 != 4);
    
    // Return 0 indicates that the program implementation is accomplished. 
    return 0;
}
 
