#include <stdio.h>

int main(void)
{
	int r = 2;
	float pi = 3.14159;
	printf("Diameter = %d\n", 2 * r);
	printf("Circumference = %f\n", 2 * pi * r);
	printf("Area = %f\n", pi * r * r);
	return 0;
}