/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

void change(int *a,int *b);
int main()
{
	int a=10,b=11;
	printf("a=%d, b=%d\n", a,b);
	change(&a,&b);
	printf("a=%d, b=%d\n", a,b);
	return 0;
}

void change(int *a, int *b)
{
	int pem=*a;
	*a=*b;
	*b=pem;
}
