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
    } stu1 = {"Tom", 12, 18, 'A', 136.5};
    struct stu *pstu = &stu1;
	printf("%s %d %d %c %.2f",pstu->name, pstu->num, pstu->age,pstu->group,pstu->score);
	return 0;
}

