#include <stdio.h>

int main(void)
{
	int counter = 0;
	scanf("%d", &counter);
	int number = 0, smallest = 0;
	for (int counted = 1; counted <= counter; counted++) {
		scanf("%d", &number);
		if (counted == 1) {
			smallest = number;
		}
		else if (number < smallest) {
			smallest = number;
		}

	}
	printf("The smallest among the entered numbers is %d", smallest);
	return 0;
}