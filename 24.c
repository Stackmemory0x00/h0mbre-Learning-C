#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;

    fd = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if (fd)
    {
        puts("File opened for writing succesfully");
        
    }
    else
    {
        puts("Error opening file");
        return -1;
    }

    int bytesWritten;
    bytesWritten = write(fd, "Hello hackers\n", 14);

    if (bytesWritten)
    {
        printf("No of bytes written is %d\n", bytesWritten);
    }
    else
    {
        puts("Error !");
        return -1;
    }

    printf("fd is %d\n",fd);

    return 0;
}