/*
Intialize and delcare an int variable with any value. Assign a pointer variable to the int variable you just declared and then print the value of the pointer variable.
*/
#include <stdio.h>



int main(void)
{
    int number = 10;
    int* ptrNumber = &number;

    printf("The value of the pointer is:0x%p\n", ptrNumber);


    return 0;
}
