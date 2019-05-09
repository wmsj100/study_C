/*
 * t2.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main()
{
	char buffer[128];
	int nread;
	nread = read(0, buffer, 128);
	printf("nread is %d", nread);
	if(nread == -1)
	{
		write(2, "A read error occured\n", 26);
	}

	if((write(1, buffer, nread)) != nread)
	{
		write(2, "A write error has occured\n", 27);
	}
	exit(0);
}

