/*
Prompt the user to input their first and last name and then print them a welcome message. Try storing the input as a char variable's value.
Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the god{because there is only one God} that the user input fits.
Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.

tokyo:~/LearningC/ # ./assignment3
Enter your first name: Jimmy
Enter your last name: Smith
Hello Jimmy Smith!

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char firstName[10];
    char lastName[10];

    printf("Enter your first name:");
    (void)scanf("%9s", firstName);

    printf("Enter your last name:");
    (void)scanf("%9s", lastName);

    printf("Hello %s %s!\n", firstName, lastName);

    return 0;
}
