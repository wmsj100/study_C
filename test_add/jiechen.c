#include<stdio.h>

main()
{
	int num=4;
	int sum = fn(num);
	printf("the sum is %d",sum);

}

int fn(int num)
{
	if(num==0 | num==1)
	{
		return 1;
	}
	else
	{
		return num * fn(num - 1);
	}

}
