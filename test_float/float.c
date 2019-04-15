#include<stdio.h>

int main()
{
	float a = 0.321;
	float b = 123.092;
	double e = 0.7623e-2;
	double c = 2e+10;
	float d = 0.000002;

	printf("a=%f\n, b=%f\n, e=%lf\n, b=%e\n, e=%lE\n, ge=%g\n, gb=%g\n",a,b,e,b,e,e,b);
	printf("c=%lg\n, d=%g\n,cE=%lG\n, dE=%G\n",c,d,c,d);
	return 0;
}
