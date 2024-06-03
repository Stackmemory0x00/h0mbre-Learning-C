/*
Create an int variable with int variable.
Create variable that is a pointer to the int variable with int *ptr = &variable.
Use the following variable references to replace the x in the appropriate print statements below:

*ptr
variable
ptr
&variable
Print statements:

printf("The value of int variable is: %d\n", x);
printf("The value of the pointer to the int variable is: %d\n", x);
printf("The memory address of the int variable is: %d\n", x);
printf("The value held at the memory location that the pointer is pointing to is: %d\n", x);
Hint: Google and read about pointers

Extra Credit: There's more than one set of correct answers! Find a different way to get the same output.
*/
#include <stdio.h>



int main(void)
{
    int x = 99;
    int* ptrNumber = &x;

    printf("The value of int x is: %d\n", x);
    printf("The value of the pointer to the int x is: 0x%p\n", ptrNumber);
    printf("The memory address of the int x is: 0x%p\n", &x);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptrNumber);


    //let's use double pointer also

    int** doublePtr = &ptrNumber;

    printf("The memory address of the int x is: 0x%p\n", *(&ptrNumber));
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", **doublePtr);




    return 0;
}
