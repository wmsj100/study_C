/*
 * test4.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{

	FILE *fp=fopen("b", "wt+");
	char str='w';
	fputc(str, fp);
	fclose(fp);
	return 0;
}


