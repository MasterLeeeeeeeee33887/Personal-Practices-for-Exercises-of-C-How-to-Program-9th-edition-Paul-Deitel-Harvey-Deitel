#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the product number and quantity sold for one day: ");
	int number = 0, quantity = 0;
	double total = 0;
	for (int x = 1; x <= 5; x++) {
		scanf("%d %d", &number, &quantity);
		switch (number) {
		case 1:
			total += 2.98 * (double)quantity;
			break;
		case 2:
			total += 4.50 * (double)quantity;
			break;
		case 3:
			total += 9.98 * (double)quantity;
			break;
		case 4:
			total += 4.49 * (double)quantity;
			break;
		case 5:
			total += 6.87 * (double)quantity;
			break;
		}

	}
	printf("The total retail value of all products sold last week is %.2f", total);

	return 0;
}