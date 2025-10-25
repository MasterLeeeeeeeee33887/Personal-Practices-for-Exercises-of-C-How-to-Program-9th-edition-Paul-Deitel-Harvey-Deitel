#include <stdio.h>


unsigned long long int fibonacci(int n);


int main(void)
{
	int n = 0;
	scanf("%d", &n);

	printf("%llu", fibonacci(n));


	return 0;
}

unsigned long long int fibonacci(int n) {
	unsigned long long int a = 0;
	if (n == 1) {
		return a;
	}
	else if (n == 2 || n==3) {
		return a + 1;
	}
	else if (n == 4) {
		return a + 2;
	}
	a = 2;
	n--;
	unsigned long long int a_1 = 1;
	for (size_t x = 4; x <= n; x++) {
		a += a_1;
		a_1 = a - a_1;

	}
	return a;
}