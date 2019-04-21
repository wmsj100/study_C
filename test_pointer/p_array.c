/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
	int arr[]={11,31,2,3,4,5,6};
	int *p=arr;
	int len=sizeof(arr)/sizeof(int);
	for(int i=0;i<len;i++){
		printf("%d %d\n", arr[i], *(p+i));
	}
	return 0;
}

