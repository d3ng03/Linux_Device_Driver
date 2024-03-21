#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
 
#define TEXT_LEN 12
 
int main()
{
    static char buff[256];
    int fd;
 
    if ((fd = open("/dev/chardev0", O_RDWR)) < 0){
        printf("Cannot open /dev/chardev0. Try again later.\n");
    }
 
    if (write(fd, "jaehoooo", TEXT_LEN) < 0){
        printf("Cannot write there.\n");
    }
 
    if (read(fd, buff, TEXT_LEN) < 0){
        printf("An error occurred in the read.\n");
    }else{
        printf("%s\n", buff);
    }
 
    if (close(fd) != 0){
        printf("Cannot close.\n");
    }
    return 0;
}