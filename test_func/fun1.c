/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int sum(int m,int n);

int main()
{
	printf("%d", sum(1,2));
	return 0;
}

int sum(int m, int n)
{
	return m+n;
}
