/*
Create a simple structure of your choice. Mine will have a single member, an int called integer. Do not create an instances of the struct yet. Declare a pointer variable that points to your struct. This pointer doesn't actually point to anything yet because there are no instances of the first struct. Create an instance of the struct. Now initialize your pointer to point to the struct instance.

Finally, assign values to the integer member of your original struct in three ways:

assign a value by using standard dot-notation for your instance and then print the value
assign a value by using standard dot-notation for the pointer initialized to the instance and then print the value
assign a value by using the -> indirect membership operator between the pointer name and the structure member and then print the value
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct mystruct {
    int score;
};


int main(void)
{
    struct mystruct* ptr_mystruct;
    struct mystruct game = {0};
    ptr_mystruct = &game;

    game.score = 20;
    printf("Assigning using dot operator : %d\n", game.score);
    (*ptr_mystruct).score = 21;
    printf("Assigning using pointer with dot operator : %d\n", (*ptr_mystruct).score);
    ptr_mystruct->score = 22;
    printf("Assigning using pointer with arrow operator : %d\n", ptr_mystruct->score);
    return 0;
}
