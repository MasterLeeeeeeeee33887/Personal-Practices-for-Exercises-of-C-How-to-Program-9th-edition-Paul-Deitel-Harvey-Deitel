#include <stdio.h>

int main(void)
{
	double principal = 0;
	double rate = 0;
	int day = 0;
	printf("%s", "Enter loan principal (-1 to end): ");
	scanf("%lf", &principal);
	printf("%s", "Enter interest rate: ");
	scanf("%lf", &rate);
	printf("%s", "Enter term of the loans in days: ");
	scanf("%d", &day);
	printf("The interest charge is $%.2f\n\n", principal * rate * (double)day / 365);

	while (principal != -1) {
		printf("%s", "Enter loan principal (-1 to end): ");
		scanf("%lf", &principal);
		if (principal == -1) {
			break;
		}
		printf("%s", "Enter interest rate: ");
		scanf("%lf", &rate);
		printf("%s", "Enter term of the loans in days: ");
		scanf("%d", &day);
		printf("The interest charge is $%.2f\n\n", principal * rate * (double)day / 365);
	}

	return 0;
}