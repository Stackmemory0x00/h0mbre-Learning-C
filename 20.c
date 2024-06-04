/*
Create/define a structure (struct) outside of main() that includes an int, char, and float member. Inside of main(), declare values for those struct members and then print their values to the terminal.
*/

#include <stdio.h>

struct myStruct {
    int a;
    float b;
    char c;
};


int main(void)
{

    struct myStruct data;

    data.a = 10;
    data.b = 3.14;
    data.c = 'Z';

    printf("This is an int:%d\nThis is a float:%.2lf\nThis is a char:%c\n",data.a,data.b,data.c);

    return 0;
}
