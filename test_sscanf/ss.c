/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	char s1[10];
	char *str="abcdefghijk";
	sscanf(str, "%6s", s1);
	printf("%s", s1);
	return 0;
}

