#include<stdio.h>
#define Height 10

int calculate(int Long,int Width);
int main()
{
	int m_Long;
	int m_Width;
	int result;

	printf("height is: %d\n", Height);
	printf("please input long\n");
	scanf("%d",&m_Long);
	printf("please input width\n");
	scanf("%d",&m_Width);
	result=calculate(m_Long,m_Width);
	printf("the area is ");
	printf("%d\n", result);
	return 0;
}

int calculate(int Long, int Width)
{
	int result = Long * Width * Height;
	return result;
}
