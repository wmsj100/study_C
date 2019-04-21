/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	int x=10,y=20,*p1=&x,*p2=&y;
	char z='a',*p3=&z;
	printf("x=%#X y=%#X z=%#X p1=%#X p2=%#X p3=%#X\n", &x, &y, &z, p1, p2, p3);
	p1++;
	p2++;
	p3++;
	printf("p1=%#X p2=%#X p3=%#X\n",p1, p2, p3);
	p1-=2;
	p2-=2;
	p3-=2;
	printf("p1=%#X p2=%#X p3=%#X\n",p1, p2, p3);

	return 0;
}

