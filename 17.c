/*
Declare a function that prints "Hello, World!" to the terminal and then call that function inside the main() function.

Extra Credit: Use a function prototype to establish your function and then add a function definition below main().

*/
#include <stdio.h>

void print(char* string);

int main(void)
{

    print("Hello, World!");


    return 0;
}

void print(char* string)
{
    printf("%s\n", string);
}