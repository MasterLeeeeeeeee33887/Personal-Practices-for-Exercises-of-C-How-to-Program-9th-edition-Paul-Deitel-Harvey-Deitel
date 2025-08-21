#include <stdio.h>

int main(void)
{
	int acc_number = 0, credit_limit = 0, balance = 0;
	for (int x = 1; x <= 3; x++) {
		printf("%s", "Enter the customer's account number, credit limit and current balance: ");
		scanf("%d %d %d", &acc_number, &credit_limit, &balance);

		printf("New credit limit: %d\n", credit_limit / 2);

		if (balance >= credit_limit) {
			printf("%s", "This customer has balances that exceed the new credit limits.\n\n");
		}
		else {
			printf("%s", "This customer don't have balances that exceed the new credit limits.\n\n");
		}
	}
	
	return 0;
}