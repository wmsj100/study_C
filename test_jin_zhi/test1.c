#include<stdio.h>

int main()
{
	int a = 0b101; // 这是二进制
	int b = -0B110010; // 这也是二进制
	int c = 02713; // 这是八进制
	int d = 0x1dab83; // 这是十六进制

	printf("%#o,b=%#o,c=%#o,d=%#o\n",a,b,c,d);
	printf("%#d,b=%#d,c=%#d,#d=%#d\n",a,b,c,d);
	printf("%#x,b=%#x,c=%#x,d=%#x\n",a,b,c,d);
	printf("%#X,b=%#X,c=%#X,d=%#X\n",a,b,c,d);
	return 0;

}
