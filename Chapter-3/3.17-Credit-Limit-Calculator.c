#include <stdio.h>

int main()
{
	int account = 0;
	printf("%s", "Enter account number (-1 to end): ");
	scanf("%d", &account);
	float balance = 0;
	printf("%s", "Enter beginning balance: ");
	scanf("%f", &balance);
	float charge = 0;
	printf("%s", "Enter total charges: ");
	scanf("%f", &charge);
	float credit = 0;
	printf("%s", "Enter total credits: ");
	scanf("%f", &credit);
	float limit = 0;
	printf("%s", "Enter credit limits: ");
	scanf("%f\n", &limit);

	balance = balance + charge - credit;

	if (balance > limit) {
		printf("Account: %-20d\n", account);
		printf("Credit limit: %-20.2f\n", limit);
		printf("Balance: %-20.2f\n", balance);
		printf("%s", "Credit Limit Exceeded.\n\n");
	}

	else {
		while (account != -1) {
			printf("%s", "Enter account number (-1 to end): ");
			scanf("%d", &account);
			if (account == -1) {
				break;
			}
			printf("%s", "Enter beginning balance: ");
			scanf("%f", &balance);
			printf("%s", "Enter total charges: ");
			scanf("%f", &charge);
			printf("%s", "Enter total credits: ");
			scanf("%f", &credit);
			printf("%s", "Enter credit limits: ");
			scanf("%f", &limit);

			balance = balance + charge - credit;

			if (balance > limit) {
				printf("Account: %-20d\n", account);
				printf("Credit limit: %-20.2f\n", limit);
				printf("Balance: %-20.2f\n", balance);
				printf("%s", "Credit Limit Exceeded.\n\n");
			}
		}
	}
	
	return 0;
}
