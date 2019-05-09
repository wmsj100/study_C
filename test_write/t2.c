/*
 * t2.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>


int main()
{
	int a=0;
	a=write(5, "Here is some data\n", 18);
	printf("a is %d\n", a);
	exit(0);
}

