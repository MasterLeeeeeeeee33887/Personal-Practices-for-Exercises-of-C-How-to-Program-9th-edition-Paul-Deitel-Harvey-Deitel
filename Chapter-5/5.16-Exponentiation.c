#include <stdio.h>

long long int integerPower(int base, int exponent);


int main(void)
{
	int a, b = 0;
	scanf("%d %d", &a, &b);
	
	printf("%lld", integerPower(a, b));

	return 0;
}

long long int integerPower(int base, int exponent) {
	long long int product = 1;
	for (int n = 1; n <= exponent; n++) {
		product *= base;
	}
	return product;
}





