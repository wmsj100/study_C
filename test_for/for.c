/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	char str[30]={0};
	scanf("%s", str);
	for(int i=0,len=sizeof(str)/sizeof(char);i<len; i++){
		printf("str[i]=%c;index is %d\n", str[i], i);
	}

	return 0;
}

