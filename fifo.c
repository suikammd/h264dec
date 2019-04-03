//
// Created by XG-LAB on 1/2/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "fifo.h"

int create_fifo(const char * pathname, mode_t mode)
{
    fifo = pathname;
    if(mkfifo(fifo, mode) < 0) {
        return -1;
    }

    return 0;
}

//int init_fifo_write(const char *pathname)
//{
//    // open fifo to wirte
//    fifo_write = open(pathname, O_WRONLY);
//    if(fifo < 0){
//        perror("open");
//        return -1;
//    }
//    return 0;
//}

//int open_fifo_read(const char *pathname)
//{
//    // open fifo to read
//    fifo_read = open(pathname, O_RDONLY);
//    if(fifo < 0){
//        perror("fifo");
//        return -1;
//    }
//    return 0;
//}

