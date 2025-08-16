#include <stdio.h>

int main(void)
{
	printf("%s", "Enter three nonzero integers: ");
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int largest = a;
	if (b > largest) {
		largest = b;
		if (c > largest) {
			largest = c;
		}
	}
	else {
		if (c > largest) {
			largest = c;
		}
	}

	if ((a * a + b * b + c * c-largest*largest) == largest * largest) {
		printf("%s", "They could represent the sides of a right triangle.");
	}
	else {
		printf("%s", "No, they coudn't represent the sides of a right triangle.");
	}




	return 0;
}