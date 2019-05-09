/*
 * t1.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
	char c[20];
	int in, out;
	in = open("file.in", O_RDONLY);
	out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
	printf("num is %d %d\n", in, out);
	int num = read(in, &c,10);
	printf("read num is %d char is %s\n", num, c);
	int num2=write(out, &c, num);
	printf("write num is %d\n", num2);

	exit(0);
}


