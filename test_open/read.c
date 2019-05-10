/*
 * read.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	char block[1024];
	int in,out, nread;
	
	in = open("file.in", O_RDONLY);
	out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
	nread = read(in, block, sizeof(block));
	write(out, block, nread);
	printf("nread is %d\nstr is %s", nread, block);
	exit(0);
}
