/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", a>b?a:b);
	return 0;
}

