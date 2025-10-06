#include <stdio.h>

double min(double a, double b, double c);


int main(void)
{
	double a, b, c = 0;
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("%lf", min(a, b, c));

	return 0;
}


double min(double a, double b, double c) {
	double minimum = a;
	if (b < minimum) {
		minimum = b;
	}
	if (c < minimum) {
		minimum = c;
	}
	return minimum;
}