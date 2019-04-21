/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{

	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("Line: %d\n", __LINE__);
	printf("File: %s\n", __FILE__);
	system("pause");
	return 0;
}

