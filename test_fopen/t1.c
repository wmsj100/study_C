/*
 * t1.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	char str[100]={0};
	printf("the value is %-10d, the value is %10d\n", 12, 13);
	printf("ths value is %-10s,the value is %10s\n", "hello", "hello");
	printf("value is -%5.4f. value is %5.4f\n", 12.32, 23.43);
	sprintf(str, "valus is %10s; the va -%10s, the value is", "hello wor", "aaaaa");
	printf("%s\n", str);

	return 0;
}

