/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int age;
	scanf("%d", &age);
	if(age >= 18)
	{
		printf("you are adule!");
	}else{
		printf("your are child!");
	}
	return 0;
}

