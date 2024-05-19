/*
Initialize and assign a value to an integer, float, and char variable. Then print each one with a sentence on a new line describing variable data type.

tokyo:~/LearningC/ # ./assignment2
5 is an integer!
3.140000 is a float!
Hello, World! is a char!
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int number = 5;
    float floatNumber = 3.14;
    char str[] = "\x48\x65\x6C\x6C\x6F\x2C\x20\x57\x6F\x72\x6C\x64\x21";

    printf("%d is an intgeger!\n%.2f is a float!\n%s is a char array!",number,floatNumber,str);
   

    return 0;
}
