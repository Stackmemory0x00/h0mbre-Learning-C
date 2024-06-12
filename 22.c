/*
More structs? God no, please no. I'm sorry, but yes. One more struct excercise. We're putting arrays in our structs, we're leveling up.

The goal here is to create a program that takes input for five player's point totals and games played totals and then calculates the scoring averages for each player. Create a struct with members for total points and games played. Create an array of structures that is five elements deep (one for each player) and loop through the array filling it with the point totals and games played totals for each player.

This array of structs should look like this in pseudo code:

struct stats {
  int points;
  int games;
};

struct stats player[5];
You can declare an int counter variable and use it to iterate through the array for both points and games.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PLAYER_NUMBERS 5

typedef struct stats {
    int points;
    int games;
}status_typedef;

status_typedef player[PLAYER_NUMBERS];


int main(void)
{

    for (int i = 0; i < PLAYER_NUMBERS ; i++)
    {
        printf("Enter Player %d's point total:", i + 1);
        (void)scanf("%d", &player[i].points);

        printf("Enter Player %d's game total:", i + 1);
        (void)scanf("%d", &player[i].games);
    }
    printf("\n\n");
    for (int i = 0; i < PLAYER_NUMBERS; i++)
    {
        float average = player[i].points / player[i].games;
        printf("Player %d's scoring average was %05.2f ppg.\n", i + 1, average);
    }


    return 0;
}
