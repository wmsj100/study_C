/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	int a,b,c;
	char *str="+CBC: 0,90,4090";
	sscanf(str, "+CBC: %d,%d,%d",&a, &b, &c);
	printf("%d, %d, %d", a,b,c);
	return 0;
}

