/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int a[3]={10,20,30};
	for(int i=-3; i<5; i++){
		printf("%d\n", a[i]);
	}
	return 0;
}

