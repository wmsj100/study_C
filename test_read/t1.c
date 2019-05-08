/*
 * t1.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	char buffer[128];
	int nread;

	nread=read(0,buffer, 128);
	printf("len is %d, str is %s", nread, buffer);
	if(nread == -1)
	{
		write(2, "A read error has occured\n", 26);
	}

	exit(0);
}



