/*
Prompt the user for A, B, and C values and then use those values to determine the value of 'X' using the Quadratic Formula.
tokyo:~/LearningC/ # ./assignment7
Enter the value of variable 'A': -7
Enter the value of variable 'B': 2
Enter the value of variable 'C': 9
The solution using the '+' operator is: -1.000000
The solution using the '-' operator is: 1.285714, but you might want to double-check that...

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter the value of variable 'A':");
    (void)scanf("%lf", &a);
    printf("Enter the value of variable 'B':");
    (void)scanf("%lf", &b);
    printf("Enter the value of variable 'C':");
    (void)scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    // Condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("The solution using the '+' operator is %.2lf\n", root1);
        printf("The solution using the '-' operator is: %.2lf\n", root2);
    }
    // Condition for real and same roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    // If roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("The solution using the '+' operator is %.2lf + %.2lfi\n", realPart, imagPart);
        printf("The solution using the '-' operator is: 1.285714 %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}

