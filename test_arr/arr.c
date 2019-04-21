/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int arr[5]={0};
	for(int i=0,len=sizeof(arr)/sizeof(int);i<len;i++){
		scanf("%d", &arr[i]);
		printf("%d\n", arr[i]);
	}
	
	return 0;
}

