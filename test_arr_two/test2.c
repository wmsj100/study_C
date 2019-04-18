/*
 * test2.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30]="wmsj100.com";
	char str1[] = "wmsj100.com";
	int len = sizeof(str1)/sizeof(char);
	int len1 = strlen(str1);
	printf("str is %s %d %d", str1, len, len1);
	return 0;
}



