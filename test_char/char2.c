/*
 * char2.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	char c=65;
	int i=0;
	for(;c<=90;c++,i++){
		str[i]=c;
	}
	printf("%s %d", str, strlen(str));
	return 0;
}


