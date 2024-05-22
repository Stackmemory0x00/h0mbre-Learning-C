/*
Ask the user for a number between 1 and 500 and then display what range that number is in from the following:
1 - 100
101 - 200
201 - 300
301 - 400
401 - 500
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
    int number;
    
    printf("Enter a number between 1 and 500:");
    (void)scanf("%d", &number);

    if (number >= 1 && number <= 100)
        printf("Your number is between 1 and 100!#");
    else if (number >= 101 && number <= 200)
        printf("Your number is between 101 and 200!#");
    else if (number >= 201 && number <= 300)
        printf("Your number is between 201 and 300!#");
    else if (number >= 301 && number <= 400)
        printf("Your number is between 301 and 400!#");
    else if (number >= 401 && number <= 500)
        printf("Your number is between 401 and 500!#");
    else 
    {
        printf("Your number was not in any of our ranges.#\n");
    }


    return 0;
}
