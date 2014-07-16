#include <stdio.h>

int main() 
{
	short x = 15;
	int y = x;
	printf("The value of y  = %i\n", y);

	int w = 100000;
	short z = w;
	printf("The value of z = %hi\n", z);

	int a = 7;
	int b = 2;
	float c = a / b;
	printf("c = %f\n", c);

	int d = 7;
	int e = 2;
	float f = (float)d / e;
	printf("f = %f\n", f);
	return 0;
}