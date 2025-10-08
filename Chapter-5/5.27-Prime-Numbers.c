#include <stdio.h>
#include <math.h>



void isPrime(int a);


int main(void)
{
	for (int x = 1; x <= 10000; x++) {
		isPrime(x);
	}

	return 0;
}


void isPrime(int a) {
	int num_of_fac = 0;
	printf("%s", "Factors for ");

	printf("%d until sqrt(%d): \n", a, a);

	for (int x = 1; x <sqrt(a); x++) {
		if (a % x == 0) {
			printf("%d ", x);
			num_of_fac++;
		}
	}
	printf("%s", "\n\n");
	if (num_of_fac - 1 == 0) {
		printf("*******The Prime number: %d\n\n", a);
	}
}
