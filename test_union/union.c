/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

union data
{
	int n;
	char ch;
	short f;
};

int main()
{
	union data a;
	printf("%d %d\n", sizeof(a), sizeof(union data));
	a.n=0x40;
	printf("%X, %c, %hX\n", a.n, a.ch, a.f);
	a.ch='9';
	printf("%X, %c, %hX\n", a.n, a.ch, a.f);
	a.f=0x2059;
	printf("%X, %c, %hX\n", a.n, a.ch, a.f);
	a.n=0x3E25AD54;
	printf("%X, %c, %hX\n", a.n, a.ch, a.f);

	return 0;
}

