/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int age,score;
	scanf("%d %d", &age, &score);
	if(age>=18 || score >= 60){
		printf("ok!\n");
	} else {
		printf("fault!!");
	}
	return 0;
}

