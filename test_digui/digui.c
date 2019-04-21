/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int jiechen(int m);
int main()
{
	printf("%d", jiechen(5));
	return 0;
}

int jiechen(int m)
{
	if(m <= 1){
		return 1;
	}else{
		return m*jiechen(m-1);
	}
	return 0;

}

