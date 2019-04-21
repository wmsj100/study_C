/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int max(int *arr, int len);
void getVal(int *arr, int len);
int main()
{
	int arr[5]={0},len;
	len=sizeof(arr)/sizeof(int);
	getVal(arr,len);
	int res=max(arr, len);
	printf("max value is %d", res);
	return 0;
}

void getVal(int *arr, int len)
{
	for(int i=0;i<len;i++){
		scanf("%d", &(arr[i]));
	}
}

int max(int *arr, int len)
{
	int max=*arr;
	for(int i=1;i<len;i++){
		if(max<*(arr+i)){
			max=*(arr+i);
		}
	}
	return max;
}

