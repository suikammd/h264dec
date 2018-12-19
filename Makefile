ARM_TOOLCHAIN = /usr/local/arm/arm-linux-gcc-4.4.3
ARM_ROOT      = $(ARM_TOOLCHAIN)/arm-none-linux-gnueabi/sys-root/lib
#CROSS_COMPILE = /usr/local/arm/arm-linux-gcc-4.4.3/bin/arm-linux-
#ARCH = arm
#CC:= $(CROSS_COMPILE)gcc
#LD:= $(CROSS_COMPILE)ld
#KDIR = /usr/src/linux-headers-4.13.0-26-generic
#PWD := $(shell pwd) 
CFLAGS  = -O0 -g3 -Wall -Wno-format-security
OBJ     = streamer.o network.o base64.o utils.o rtp.o rtcp.o rtsp.o h264dec.o md5.o
SOURCES = streamer.c network.c base64.c utils.c rtp.c rtcp.c rtsp.c h264dec.c md5.c
LIBS    = -lpthread

all: h264dec

h264dec: $(OBJ)
	gcc $(CFLAGS) -o $@ $(OBJ) $(LIBS)

#arm: $(OBJ)
#	arm-linux-gcc --sysroot=$(ARM_ROOT) $(SOURCES) -o h264dec $(LIBS)

clean:
	rm -rf *~ *.o rtsp

