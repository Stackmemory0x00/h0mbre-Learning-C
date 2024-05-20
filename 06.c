/*
Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction). Tell the user whether or not there is a remainder using if control flow.

Example Output
tokyo:~/LearningC/ # ./assignment6
Enter a numerator: 24
Enter a denominator: 8
There is NOT a remainder!#
tokyo:~/LearningC/ # ./assignment6
Enter a numerator: 55
Enter a denominator: 9
There is a remainder!#
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
    int numerator;
    int denominator;

    printf("Enter a numerator:");
    (void)scanf("%d", &numerator);
    printf("Enter a denominator:");
    (void)scanf("%d", &denominator);

    if (!(numerator % denominator))
        printf("There is NOT a remainder!#");
    else {
        printf("There is a remainder!#");
    }

    return 0;
}
