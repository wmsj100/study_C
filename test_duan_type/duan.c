/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{

	union a
	{
		int num;
		char ch;
	} a1;
	a1.num=1;
	if(a1.ch == 1)
	{
		puts("little-endian");
	}
	else
	{
		puts("big-ending");
	}
	return 0;
}

