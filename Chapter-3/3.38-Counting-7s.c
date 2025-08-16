#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a 5 digits or fewer digits integer: ");
	int number = 0;
	scanf("%d", &number);
	int counter = 0;
	while (number != 0) {
		if (number % 10 == 7) {
			counter++;
		}

		number /= 10;
	}
	printf("There are %d 7s in the entered number.", counter);

	return 0;
}