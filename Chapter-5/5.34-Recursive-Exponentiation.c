#include <stdio.h>



unsigned long long int power(unsigned long long int base, int exponent);


int main(void)
{
	unsigned long long int b = 0;
	int exp = 0;
	scanf("%llu %d", &b, &exp);

	printf("%llu", power(b, exp));

	return 0;
}

unsigned long long int power(unsigned long long int b, int exp){
	int e = exp;

	unsigned long long int a = b;
	
	if (e == 1) {
		return a;
	}
	else {
		a = a * power(a, (e - 1));	
	}
	return a;
}