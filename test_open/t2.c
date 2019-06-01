/*
 * t2.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int c, a=0, f1, f2;
	FILE *in,*out;
	in = fopen("file.in", "r");
	out = fopen("fine.out", "w");
	f1=fileno(in);
	f2=fileno(out);
	while((c=fgetc(in) != EOF))
	{
		a++;
		fputc(c, out);
	}

	printf("char c is %c int c is %d EOF is  %d count is %d\n", c,c,EOF, a);
	printf("file num in is %d; file out num is %d\n", f1, f2);
	fclose(in);
	fclose(out);
	sleep(1000);
	exit(0);

}
