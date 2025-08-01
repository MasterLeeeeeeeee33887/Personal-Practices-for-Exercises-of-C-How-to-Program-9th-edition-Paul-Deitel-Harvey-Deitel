#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	printf("Enter two integers: \n");
	scanf("%d %d", &a, &b);
	int sum = a + b;
	int diff = a - b;
	int quotient = a / b;
	int remainder = a % b;

	printf("Sum: %d\n", sum);
	printf("Difference: %d\n", diff);
	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", remainder);

	return 0;
}