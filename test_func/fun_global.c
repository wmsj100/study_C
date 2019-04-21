/*
 * fun_global.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int sum,sh,sw,sk;
int getM(int h,int w, int k);
int main()
{
	int n=5;
	getM(10,20,4);
	printf("%d %d %d %d\n",sum,sh,sw,sk);
	{
		n=10;
		printf("%d", n);
	}
	printf("%d", n);
	return 0;
}

int getM(int h, int w, int k)
{
	sh=h*w;
	sw=h*k;
	sk=w*k;
	sum=sh+sw+sk;
}


