#include<stdio.h>

int main()
{
	int a[] = {1,2,3,4};
	int len = sizeof(a)/sizeof(int);
	for(int i=0; i<len; i++){
		printf("%d\n", a[i]);
	}
}
