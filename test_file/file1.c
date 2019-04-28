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
	FILE *fp;
	fp=fopen("data.txt", "at+");
	fputs("\nhello world!", fp);
	fclose(fp);

	return 0;
}

