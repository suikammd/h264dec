//
// Created by XG-LAB on 1/2/2019.
//

#ifndef H264DEC_FIFO_H
#define H264DEC_FIFO_H

//int fifo_write, fifo_read;
int fifo_write;
const char *fifo = "fifo";
int init_fifo_write(const char *pathname);
int create_fifo(const char * pathname, mode_t mode);

#endif //H264DEC_FIFO_H
