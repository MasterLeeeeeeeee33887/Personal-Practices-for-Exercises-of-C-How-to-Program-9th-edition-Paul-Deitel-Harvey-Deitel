#include <stdio.h>

long long int ReverseDigits(long long int a);


int main(void)
{
	long long int a = 0;
	scanf("%lld", &a);

	printf("%lld", ReverseDigits(a));

	return 0;
}


long long int ReverseDigits(long long int a) {
	int x = 0;
	long long int b = 0;
	while (a != 0) {
		x = a % 10;
		b *= 10;
		b += x;

		a /= 10;
	}

	return b;
}