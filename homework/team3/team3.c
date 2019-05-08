/*
 * team3.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

extern void show();

int teamfunc3(int input)
{
	printf("my team is team_%d, input value is %d", 3, input);
	show();
	return input;
}
