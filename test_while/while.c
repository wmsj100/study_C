/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int i=0;
	while(i<10){
		printf("%d\n", i);
		i++;
	}
	printf("start string");
	char c;
	while(getchar() != '\n'){
//		scanf("%c", &c);
		c=getchar();
		printf("%c\n", c);
	}
	printf("end char");
	return 0;
}

