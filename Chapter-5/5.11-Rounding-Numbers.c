#include <stdio.h>
#include <math.h>


int roundToInteger(double x);
double roundToTenths(double x);
double roundToHundreths(double x);
double roundToThousandths(double x);

int main(void)
{
	double x = 0;
	printf("%s", "Enter a number(-1 to exit): ");
	scanf("%lf", &x);
	if (x == -1) {
		return 0;
	}
	int integer_x = roundToInteger(x);
	double tenths_x = roundToTenths(x);
	double hundreth_x = roundToHundreths(x);
	double thousandths_x = roundToThousandths(x);
	printf("%lf\t%d\t%lf\t%lf\t%lf\n", x, integer_x, tenths_x, hundreth_x, thousandths_x);

	while (x != -1) {
		printf("%s", "Enter a number(-1 to exit): ");
		scanf("%lf", &x);
		if (x == -1) {
			break;
		}
		int integer_x = roundToInteger(x);
		double tenths_x = roundToTenths(x);
		double hundreth_x = roundToHundreths(x);
		double thousandths_x = roundToThousandths(x);
		printf("%lf\t%d\t%lf\t%lf\t%lf\n", x, integer_x, tenths_x, hundreth_x, thousandths_x);
	}
	return 0;
}

int roundToInteger(double x) {
	return floor(x + 0.5);
}

double roundToTenths(double x) {
	return floor(x * 10 + 0.5) / 10;
}

double roundToHundreths(double x) {
	return floor(x * 100 + 0.5) / 100;
}

double roundToThousandths(double x) {
	return floor(x * 1000 + 0.5) / 1000;
}