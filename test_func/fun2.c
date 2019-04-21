/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int xunhuan(int m);
int jia(int n);

int main()
{
	printf("%d\n", xunhuan(10));
	return 0;
}

int xunhuan(int m)
{
	int res=0;
	for(int i=1;i<=m;i++){
		res+=jia(i);
	}
	return res;
}

int jia(int n)
{
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
