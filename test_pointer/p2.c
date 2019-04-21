/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	int x=10,y=15,*p1=&x,*p2=&y;
	y=(*p1)*5;
	x=(*p2)+3;
	++(*p1);
	++(*p2);
	printf("%d, %d, %d, %d", x, *p1, y, *p2);

	return 0;
}

