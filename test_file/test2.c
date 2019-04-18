/*
 * test2.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;
	fp=fopen("a.txt", "wt+");
	printf("Input a string; \n");
	printf("%c", fgetc(fp));

	fclose(fp);
	return 0;
}



