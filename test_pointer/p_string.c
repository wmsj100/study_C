/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char *str="wmsj100.com";
	char *p = str;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		printf("%c %c %c\n", str[i], *(p+i), p[i]);
	}
	return 0;
}

