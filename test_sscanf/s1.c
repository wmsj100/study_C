/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	char str[10];
	char *s1="hello world";
	sscanf(s1, "%[^ ]", str);
	printf("%s", str);

	return 0;
}

