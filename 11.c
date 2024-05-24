/*
Ask the user for test scores and then keep asking the user if they would like to continue or end the program. Store all test score values and calculate an average score that prints to the terminal when the user ends the program. You can initialize your array size as 10 and let's use a max test score count of 8 for this.
Print the average of the test scores to the second decimal place.
Hint: Look up while and for loops. Look up the strcmp() function.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE 10

int main(void)
{
    int scoresp[ARRAY_SIZE] = { 0 };
    int maxScoreSize = 8;
    double sum = 0;
    int i;

    for (i = 0; i < maxScoreSize; i++)
    {
        int score;
        char proceedOrNot;
        printf("Enter a test score:");
        (void)scanf("%d", &score);
        sum += score;
        printf("Would you like to continue? Y/N:");
        (void)scanf(" %c", &proceedOrNot);
        if (proceedOrNot == 'n' || proceedOrNot == 'N')
        {
            printf("%.2lf is the average.", sum / (i + 1));
            return;
        }
    }
    printf("%.2lf is the average.", sum / (i + 1));

    return 0;
}
