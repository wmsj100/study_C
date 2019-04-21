/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	for(int i=1;i<10; i++){
		for(int j=1; j<=i;j++){
			printf("%d*%d=%-4d",i,j, i*j);
		}
		printf("\n");
	}
	return 0;
}

