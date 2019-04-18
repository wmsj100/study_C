/*
 * test1.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("/home/pi/Code/study_C/test_file/a.txt", "rb")) == NULL){
		printf("Error!!\n");
		getchar();
		exit(1);
	}	
	rewind(fp);
	while((ch=fgetc(fp)) != EOF){
		printf("%c", &ch);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}



