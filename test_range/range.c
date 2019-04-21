/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));
	int a=rand();
	printf("%d", a%13+10);
	return 0;
}

