/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int a=100;
	char c[3]="abc";
	char *b="wmsj100";
	printf("%s %d\n", c, sizeof(c)/sizeof(char));
	return 0;
}

