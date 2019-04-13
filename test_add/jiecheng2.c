#include<stdio.h>

main()
{
	int i,num,sum;
	i=0;
	num=4;
	sum=1;
	while(i<=num)
	{
		if(i==0 | i==1)
		{
			sum = sum * 1;
		}
		else
		{
			sum = sum * i;
		}
		i++;
	}
	printf("the sum is %d", sum);

}
