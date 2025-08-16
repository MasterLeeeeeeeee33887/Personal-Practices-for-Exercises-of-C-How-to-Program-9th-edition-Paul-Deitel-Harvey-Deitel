#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a binary integer with 5 digits or fewer: ");
	int number = 0;
	scanf("%d", &number);
	int deci_number = 0, counter = 2;
	while (number != 0) {
		deci_number += (number % 10) * counter;
		number /= 10;
		counter *= 2;
	}
	printf("%d", deci_number);
	return 0;
}