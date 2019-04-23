/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{

	char str[20];
	char *s="lios/hello world@122";
	sscanf(s, "%*[^/]/%[^@]",str);
	printf("%s", str);
	return 0;
}

