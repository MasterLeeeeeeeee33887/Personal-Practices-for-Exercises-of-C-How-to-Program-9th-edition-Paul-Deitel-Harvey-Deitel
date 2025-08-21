#include <stdio.h>

int main(void)
{
	int number = 0, counter = 0, sum = 0;
	while (number != 9999) {
		scanf("%d", &number);
		if (number == 9999) {
			break;
		}
		sum += number;
		counter++;

	}
	printf("The average is %f", (double)sum / (double)counter);

	return 0;
}