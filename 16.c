/*
Initialize an int array of 10 elements and then print the value of the array with printf("%d", array).

Extra Credit: Use Google to find out why we get a memory address (a pointer!) as our output.
*/

#include <stdio.h>



int main(void)
{
    int array[] = { 1,2,3,4,5,6,7,8,9,10 };

    printf("The memory address of this array is: 0x%p\n", array);


    return 0;
}
