/*
Initialize a char pointer variable. Use the malloc() function to allocate memory for a char array by assigning the result of malloc() to your pointer. Your program should check that the memory was indeed allocated and if not, print an error message and exit with code 1. Make sure your allocation size is a multiple of the char data type by using the sizeof() function so the code is portable. Google best practices for using malloc(). Don't forget to use free() to free the memory space before exiting the program if successful.

Print a success or failure message to the terminal.

Example Output
tokyo:~/LearningC/ # ./assignment19
Memory was successfully allocated.#
*/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    char* string = malloc(10 * sizeof(char));

    if (NULL == string)
    {
        printf("ERROR - Memory was NOT successfully allocated\n");
        return 1;
    }
    else 
    {
        printf("Memory was successfully allocated.#\n");
    }
    free(string);
    string = NULL;

    return 0;
}
