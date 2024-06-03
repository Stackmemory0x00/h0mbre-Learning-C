/*
Create a program that prompts the user to input scoring totals for 5 players during 4 basketball games. The program will track which player had the highest scoring average over the 4 games and print the result to the terminal.

Hint: Use a two-dimensional array and nested for loops. The outer-most for loop will iterate on a per game basis gathering scores for the inner-most for loop interating through players. Use this same model to create arrays to store total scores and to calculate averages.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NO_OF_GAMES 4
#define NO_OF_PLAYERS 5

int main(void)
{
    int game[NO_OF_GAMES][NO_OF_PLAYERS] = { 0 };
    double highest_score = 0;
    int highest_player;


    for (int i = 0; i < NO_OF_GAMES; i++)
    {
        printf("GAME #%d\n", i + 1);
        for (int j = 0, k = 1; j < NO_OF_PLAYERS; j++)
        {
            printf("Enter scoring total for Player #%d:", k++);
            (void)scanf("%d", &game[i][j]);
        }
    }

    for (int i = 0; i < NO_OF_PLAYERS; i++)
    {
        int j;
        double current_score = 0;
        for (j = 0; j < NO_OF_GAMES; j++)
        {
            current_score += game[j][i];

        }
        if (current_score > highest_score)
        {
            highest_score = current_score;
            highest_player = i + 1;
        }

        printf("\n");
    }

    printf("Player #%d had the highest scoring average at %.2lf points per game.\n", highest_player, highest_score / NO_OF_GAMES);

    return 0;
}
