/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{

	enum week{Mon=1, Tues, Wed, Thurs, Fri, Sat, Sun};
	int num=0;
	scanf("%d", &num);
	switch(num)
	{
		case Mon:
			puts("Monday");
			break;
		case Tues:
			puts("Tuesday");
			break;
		case Thurs:
			puts("Thusday");
			break;
		case Wed:
			puts("Wednesday");
			break;
		case Fri:
			puts("Friday");
			break;
		case Sat:
			puts("Saturday");
			break;
		case Sun:
			puts("Sunday");
			break;
		default:
			puts("the num is error");
			break;
	}
	return 0;
}

