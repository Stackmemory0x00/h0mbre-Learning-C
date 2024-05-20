/*
Prompt the user to input the length of a radius and then print the area of the user's circle to the terminal.
Extra credit: Use the #define feature of C to assign the value 3.14 to PIE.

tokyo:~/LearningC/ # ./assignment4
Enter the radius of your circle: 12.34
The area of your circle is 478.145386
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{

    double radius = 0;
    
    printf("Enter the radius of your circle:");
    (void)scanf("%lf", &radius);

    printf("The area of your circle is %lf\n",radius * radius * 3.14);

    return 0;
}
