#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);

int main(void)
{
	double side1 = 0, side2 = 0;
	scanf("%lf%lf", &side1, &side2);

	printf("%lf", hypotenuse(side1, side2));

	return 0;
}


double hypotenuse(double side1, double side2) {
	return sqrt(side1*side1+side2*side2);
}