/*
 * t2.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	int a;
	float b;
	char c, str[100];

	sscanf("hello, 1234, 5.6789, X, string to eht end of eht line;", "hello,%d,%g, %c,%[^\n]",&a, &b,&c, str);
	printf("%d, %g, %c, %s\n", a, b, c, str);
	return 0;
}
