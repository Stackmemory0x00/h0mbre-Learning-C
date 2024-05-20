/*
Prompt the user for a number of seconds. Take the user's input and convert the number of seconds into its duration in Hours, Minutes, and remaining Seconds.

Extra Credit: Make sure the Hours, Minutes, and Seconds print with no decimal places.
tokyo:~/LearningC/ # ./assignment5
Enter the amount of seconds: 18550
18550 seconds is equal to 5 hours, 9 minutes, and 10 seconds.#

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{

    int initialInput = 0;
    int seconds = 0;
    int hours = 0;
    int minutes = 0;

    printf("Enter the amount of seconds:");
    (void)scanf("%d", &initialInput);

    hours = initialInput / 3600;
    minutes = (initialInput - (hours * 3600)) / 60;
    seconds = initialInput - (hours * 3600) - (minutes * 60);
    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.#\n", initialInput, hours, minutes, seconds);
    return 0;
}
