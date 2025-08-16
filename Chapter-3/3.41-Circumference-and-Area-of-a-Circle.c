#include <stdio.h>

int main(void)
{
	double rad = 0;
	printf("%s", "Enter the radius of a circle: ");
	scanf("%lf", &rad);
	printf("Diameter = %f \n", 2 * rad);
	printf("Circumference = %f\n", 2 * rad * 3.14159);
	printf("Area = %f", rad * rad * 3.14159);


	return 0;
}