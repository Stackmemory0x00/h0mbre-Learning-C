/*
Null terminator char '\0' must be present at the end of every string to indicate string end.
Many C stanard library functions use Null terminator to function properly like printf,strlen etc ....

for printf and puts,  we can print the array elements using both functions. However, there are some differences:

1- puts prints(adds) a new line with every call while printf does not.
2- puts does not accept format specifiers like %s %d. it accept only one argument namely a pointer [char *string]

*/


#include <stdio.h>

void hello(void)
{
	char array[] = { 72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33 , '\0'};

	// for printf
	printf("%s\n",array);
	puts(array);
}

int main(void)
{
	hello();
}

