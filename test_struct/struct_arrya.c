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
	float avage=0.0,score=0.0;
	int base_140;
//	int len=sizeof(class);
	for(int i=0;i<5;i++)
	{
		score+=class[i].score;
		if(class[i].score > 140)
		{
			base_140+=1;
		}
	}
	avage=score/5;
	printf("score=%.2f,avage=%.2f,140 count is %d", score, avage, base_140);
	//printf("%s %d %d %c %.2f",class[0].name, class[0].num, class[0].age,class[0].group,class[0].score);
	return 0;
}

