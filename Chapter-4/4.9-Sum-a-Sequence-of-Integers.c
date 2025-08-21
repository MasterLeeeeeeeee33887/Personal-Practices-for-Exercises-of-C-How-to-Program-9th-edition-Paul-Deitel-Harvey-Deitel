#include <stdio.h>

int main(void)
{
	int counter = 0;
	scanf("%d", &counter);
	int number = 0, sum = 0;
	for (int counted = 1; counted <= counter; counted++) {
		scanf("%d", &number);
		sum += number;
	}
	printf("The sum is %d.", sum);

	return 0;
}