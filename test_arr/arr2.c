/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

int main()
{
	int nums[10] = {0, 1, 6, 10, 23, 34, 100, 177, 296, 999};
	int tag = 0;
	while(1){
		scanf("%d", &tag);
		int len=sizeof(nums)/sizeof(int);
		int i;
		for(i=0;i<len;i++){
			if(nums[i]>tag){
				printf("cur index is %d, tag %d little %d\n", i, tag, nums[i]);
				break;
			}
		}
		if(i>=len){
			printf("tag %d large then arr %d\n", tag, nums[len-1]);
		}
		if(tag == -1){
			break;
		}

	}
	return 0;
}

