#include<stdio.h>

int main()
{
	int nums[10] = {0};
	int len = sizeof(nums)/sizeof(int);
	for(int i=0;i<len;i++){
		scanf("%d", &nums[i]);
				
	}
	printf("%d", nums);
	return 0;
}
