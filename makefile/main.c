/*
 * main.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdlib.h>
#include "a.h"

extern void func_two();
extern void func_three();

int main()
{
	func_two();
	func_three();
	exit (EXIT_SUCCESS);
}


