/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"
#include "string.h"

int main()
{
	char score,result[30]="the valus is ";
	scanf("%c", &score);
	switch(score){
		case 'a': strcat(result,"aa"); break;
		case 'b': strcat(result,"bb"); break;
		case 'c': strcat(result,"cc"); break;
		case 'd': strcat(result,"dd"); break;
		default: strcat(result,"default"); break;

	}
	printf("%c %s", score, result);
	return 0;
}

