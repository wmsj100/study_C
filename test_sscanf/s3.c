/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{

	char str[10];
	char *s="123456aAbBcCdDeEfF";
	char *s1="123456abcdefABCDEF";
	sscanf(s, "%[0-9a-z]", str);
	printf("%s\n", str);
	sscanf(s1, "%[0-9a-z]", str);
	printf("%s\n", str);
	return 0;
}

