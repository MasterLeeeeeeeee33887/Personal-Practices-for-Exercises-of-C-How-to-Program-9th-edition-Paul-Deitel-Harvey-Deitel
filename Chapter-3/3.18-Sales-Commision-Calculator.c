#include <stdio.h>

int main(void)
{
	double sale = 0;
	printf("%s", "Enter sales in dollars: (-1 to end): ");//demanding the user to enter value in sale as double type
	scanf("%lf", &sale); //for double type values, %lf("l" stand for "long" rather than "one") is needed
	printf("Salary is: $%.2f\n\n", 200 + sale * 0.09);//if sale wasn't stored with %lf, printf here wouldn't work

	while (sale != -1) {
		printf("%s", "Enter sales in dollars: (-1 to end): ");
		scanf("%lf", &sale);
		if (sale == -1) {
			break;
		}
		printf("Salary is: $%.2f\n\n", 200 + sale * 0.09);

	}


	return 0;
}
