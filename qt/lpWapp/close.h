#ifndef CLOSE_H
#define CLOSE_H
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void myclose(int fd)
{
    close(fd);
}
#endif // CLOSE_H

