#include <stdio.h>


//a)Write a program that reads a non-negative integer and computes and prints its factorial.

int main(void)
{
	printf("%s", "Enter a non-negative integer: ");
	int number = 0;
	scanf("%d", &number);
	int fac_of_number = 1;
	while (number != 0) {
		fac_of_number *= number;
		number--;
	}

	printf("Its factorial is %d", fac_of_number);
	return 0;
}


//b) Write a program that estimates the value of the mathematical constant e by using the formula :
/*
int main(void) {
	double e = 1, number = 1;
	int fac_of_number = 1;
	int counter = 1;
	while (counter <= 3) {
		while (number != 0) {
			fac_of_number *= number;
			number--;
		}
		e += 1 / (double) fac_of_number;
		fac_of_number = 1;

		counter++;
		number = counter;
	}
	printf("e = %f", e);

	return 0;
}
*/

// c) Write a program that computes the value of e^x by using the formula 

/*
int main(void) {
	printf("%s", "Enter the power of e to compute the approximate value of e^x: ");
	double x = 0;
	scanf("%lf", &x);
	double e = 1, number = 1;
	int fac_of_number = 1;
	int counter = 1;
	while (counter <= 3) {
		while (number != 0) {
			fac_of_number *= number;
			number--;
		}
		e += x / (double)fac_of_number;
		fac_of_number = 1;

		counter++;
		number = counter;
		x *= x;
	}
	printf("e = %f", e);

	return 0;
}
*/