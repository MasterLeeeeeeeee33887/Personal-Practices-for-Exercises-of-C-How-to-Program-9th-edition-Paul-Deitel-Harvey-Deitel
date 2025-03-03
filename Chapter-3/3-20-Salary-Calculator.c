#include <stdio.h>

int main(void)
{
	int hour = 0;
	double rate = 0;
	printf("%s", "Enter # of hours worked (-1 to end): ");
	scanf("%d", &hour);
	printf("%s", "Enter hourly rate of the worker ($00.00): ");
	scanf("%lf", &rate);
	if (hour <= 40) {
		printf("Salary is $%.2f\n\n", (double)hour * rate);
	}
	else {
		printf("Salary is $%.2f\n\n", (double)hour * 40 + ((double)hour - 40) * 1.5 * rate);
	}

	while (hour != -1) {
		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf("%d", &hour);
		if (hour == -1) {
			break;
		}
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%lf", &rate);
		if (hour <= 40) {
			printf("Salary is $%.2f\n\n", (double)hour * rate);
		}
		else {
			printf("Salary is $%.2f\n\n", rate * 40 + ((double)hour - 40) * 1.5 * rate);
		}
	}

	return 0;
}