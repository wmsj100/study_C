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
	scanf("%s is", str);
	printf("%s", str);
	scanf("%[^\n]", str);
	printf("%s", str);
	return 0;
}

