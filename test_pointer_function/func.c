/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<string.h>

char *longstr(char *str1, char *str2);
int main()
{
	char str1[30], str2[30], *longS;
	scanf("%s %s", str1, str2);
	longS=longstr(str1, str2);
	printf("long is %s", longS);
	return 0;
}

char *longstr(char *str1, char *str2)
{
	if(strlen(str1)>strlen(str2)){
		return str1;
	}else{
		return str2;
	}
}
