/*
Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.
*/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char* firstName = (char*)malloc(1 * sizeof(char));
    char* lastName = (char*)malloc(1 * sizeof(char));
    char* tempFirstname = NULL;
    char* tempLasttname = NULL;
    char c;
    unsigned long long i = 0;
    printf("Enter your first name:");
    while ((c = getchar()) != '\n'&& c != EOF)
    {
        tempFirstname = realloc(firstName, (i + 1) * sizeof(char));
        if (tempFirstname == NULL) {
            free(firstName);
            printf("The system was not able to allocate memory. existing ....\n");
            return 1;
        }
        firstName = tempFirstname;
        firstName[i++] = c;
    }
    firstName[i] = '\0';
    i = 0;
    printf("Enter your last name:");
    while (c = getc(stdin), c != '\n')
    {
        tempLasttname = realloc(lastName, (i + 1) * sizeof(char));
        if (tempLasttname == NULL) {
            free(lastName);
            printf("The system was not able to allocate memory. existing ....\n");
            return 1;
        }
        lastName = tempLasttname;
        lastName[i++] = c;
    }
    lastName[i] = '\0';

    printf("Hello %s %s!\n", firstName, lastName);

    return 0;
}
