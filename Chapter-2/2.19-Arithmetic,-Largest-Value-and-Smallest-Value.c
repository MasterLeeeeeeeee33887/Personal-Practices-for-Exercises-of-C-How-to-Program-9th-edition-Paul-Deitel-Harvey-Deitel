#include <stdio.h>

int main(void)
{
	printf("%s", "Enter three different integers: ");
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);

	printf("Sum is %d\n", a+b+c);
	printf("Average is %d\n", (a+b+c) / 3);
	printf("Product is %d\n", a * b * c);
	int smallest = a, largest = a;
	if (a > b) {
		smallest = b;
		if (b > c) {
			smallest = c;
		}
	}
	if (a > c) {
		smallest = c;
		if (c > b) {
			smallest = b;
		}
	}
	printf("Smallest is %d\n", smallest);
	if (b > a) {
		largest = b;
		if (c > b) {
			largest = c;
		}
	}
	if (c > a) {
		largest = c;
		if (b > c) {
			largest = b;
		}
	}
	printf("Largest is %d\n", largest);
	return 0;
}