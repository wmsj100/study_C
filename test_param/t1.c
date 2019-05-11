/*
 * t1.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int arg=0;
	for(arg=0;arg<argc;arg++)
	{
		if(argv[arg][0] == '-')
		{
			printf("options is %s\n", argv[arg]+1);
		}
		else
		{
			printf("argument is %s\n", argv[arg]);
		}
	}

	exit(0);
}
