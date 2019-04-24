/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	FILE *fp=fopen("a.data","r");
	printf("asdf");
	
	fclose(fp);
	return 0;
}

