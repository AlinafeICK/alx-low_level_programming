#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() 
{

    int fd;
    fd = open("example.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("open");
        return (1);
    }
    printf("File opened successfully with file descriptor: %d\n", fd);
    close(fd);
    return (0);
}

