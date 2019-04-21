/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	for(int i=1;i>0 ; i++){
		if(i%2 == 0){
			printf("ou shu %d\n", i);
		} else {
			continue;
			printf("js shu %d", i);
		}
		if(i>10){
			break;
		}
		printf("current value is %d\n", i);
	}

	return 0;
}

