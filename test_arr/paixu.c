/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int a[]={2,1,45,23,6,55,89,12,2};
	int len=sizeof(a)/sizeof(int);
	int count=0;
	for(int i=0;i<len-1;i++){
		for(int j=1;j<len;j++){
			if(a[j-1]<a[j]){
				int tmp=a[j-1];
				a[j-1]=a[j];
				a[j]=tmp;
			}
			count++;
		}
	}
	for(int i=0;i<len;i++){
		printf("%d\n", a[i]);
	}
	printf("%d", count);
	return 0;
}
