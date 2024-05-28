/*
Prompt the user for a number of coin flips (x) and then simulate (x) number of coin flips and print the results to the terminal.

Hint: Look up the srand() function.

Example Output
tokyo:~/LearningC/ # ./assignment12
How many times would you like to flip the coin? 5000
After flipping the coin 5000 times, the results were
2536 heads
2464 tails
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

enum coin {
    TAIL,
    HEAD
};


int main(void)
{
    int flips;
    int heads = 0;
    int tails = 0;
    enum coin choice;
    printf("How many times would you like to flip the coin? ");
    (void)scanf("%d", &flips);
    srand(time(NULL));
    for (int i = 0; i < flips; i++)
    {
        choice = rand() % 2 ;
        choice ? tails++ : heads++;
    }

    printf("After flipping the coin %d times, the results were\n%d heads\n%d tails\n", flips, heads, tails);

    return 0;
}
