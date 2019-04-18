#include<stdio.h>

int main()
{
	int a[5][3]={{80,75,65}, {34,23,56},{5},{4}, {3}};
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			printf("%%d=%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
