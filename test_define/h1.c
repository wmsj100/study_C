/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

#define M (n*n+3*n)
#define N (3*M+5)

int main()
{
	int n=5;
	printf("%d",5*M+3*N);
	return 0;
}

