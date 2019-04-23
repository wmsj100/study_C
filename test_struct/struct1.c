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
    };
    struct stu stu1, stu2;
	stu1.name="Tom";
	stu1.age=12;
	stu1.num=421243;
	stu1.group='A';
	stu1.score=88.2;
	printf("%s %d %d %c %.2f",stu1.name, stu1.num, stu1.age,stu1.group,stu1.score);
	return 0;
}

