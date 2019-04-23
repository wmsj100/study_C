/*
 * model.c
 * Copyright (C) 2019 pi <pi@raspberrypi>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>

int main()
{
    struct stu
    {
      char *name;
      int num;
      int age;
      char group;
      float score;
    } class[5] =
	{
	    {"Li ping", 5, 18, 'C', 145.0},
	    {"Zhang ping", 4, 19, 'A', 130.5},
	    {"He fang", 1, 18, 'A', 148.5},
	    {"Cheng ling", 2, 17, 'F', 139.0},
	    {"Wang ming", 3, 17, 'B', 144.5}
	};
	struct stu *pstu = class;
	int len=sizeof(class)/sizeof(struct stu);
	printf("%d\n", len);
	for(int i=0;i<len;i++)
	{
		printf("%s %d %d %c %.2f",pstu->name, pstu->num, pstu->age,pstu->group,pstu->score);
	}
	return 0;
}

