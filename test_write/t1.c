/*
 * t1.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	if(write(1, "Here is some data\n", 18) != 18)
	{
		write(2, "A write error has occuree on file description 1\n", 46);
	}
	exit(0);
}


