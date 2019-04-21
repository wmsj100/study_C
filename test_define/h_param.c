/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

#define M(n) ((n)*(n)+3*(n))
int main()
{
	int n=5;
	printf("%d", M(5));
	return 0;
}

