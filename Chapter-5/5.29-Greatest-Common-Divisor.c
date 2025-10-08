#include <stdio.h>


int gcd(int a, int b);

int main(void)
{
	int a, b = 0;
	scanf("%d %d", &a, &b);

	printf("The greatest common divisor of the two integers is %d", gcd(a, b));

	return 0;
}



int gcd(int a, int b) {
	int min = a;
	if (b < min) {
		min = b;
	}
	int gcd = 1;
	for (int x = 2; x <= min; x++) {
		if (a % x == 0 && b % x == 0) {
			gcd = x;
		}
	}
	return gcd;
}


