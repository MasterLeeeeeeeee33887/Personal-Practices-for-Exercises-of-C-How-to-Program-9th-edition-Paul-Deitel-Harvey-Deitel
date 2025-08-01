#include <stdio.h>

int main(void)
{
	int counter = 1;
	double number = 0;
	double largest = 0;
	printf("%s", "Enter 10 numbers, the following program would decide which is the largest.\n");
	scanf("%lf", &number);
	largest = number;
	printf("The largest number so far: %.2lf\n", largest);
	while (counter != 10) {
		scanf("%lf", &number);
		if (number > largest) {
			largest = number;
			printf("The largest number so far: %.2lf\n", largest);
		}
		counter++;
	}
	

	return 0;
}
