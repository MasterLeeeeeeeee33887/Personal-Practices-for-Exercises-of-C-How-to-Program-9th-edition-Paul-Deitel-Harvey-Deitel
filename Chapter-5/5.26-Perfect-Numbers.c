#include <stdio.h>
#include <stdbool.h>


void isPerfect(int a);

int main(void)
{
	for (int x = 1; x <= 1000; x++) {
		isPerfect(x);
	}

	return 0;
}


void isPerfect(int a) {
	int sum = 0;
	printf("%s", "Factors for ");

	printf("%d: \n", a);

	for (int x = 1; x <= a; x++) {
		if (a % x == 0) {
			printf("%d ", x);
			sum += x;
		}
	}
	printf("%s", "\n\n");
	if (a == (sum - a)) {
		printf("*******The Perfect number: %d\n\n", a);
	}
}