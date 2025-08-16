#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a five-didit  integer: ");
	int number = 0;
	scanf("%d", &number);
	if ((number % 10) == (number / 10000)) {
		if (((number / 10) % 10) == ((number / 1000) % 10)) {
			printf("Yes, %d is a palindrome.", number);
		}
		else {
			printf("No, %d isn't a palindrome.", number);
		}
	}
	else {
		printf("No, %d isn't a palindrome.", number);
	}
	return 0;
}