/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	int *p1,*p2,a=10,b=20;
	p1=&a;
	p2=&b;
	printf("%#X, %d, %#X, %d", p1, *p1, p2, *p2);
	return 0;
}

