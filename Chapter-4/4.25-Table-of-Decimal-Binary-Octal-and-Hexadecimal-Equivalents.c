#include <stdio.h>

int main(void)
{
	printf("%s%21s%21s%21s\n", "Decimal", "Binary", "Octal", "Hexadecimal");
	int number = 1;
	for (; number <= 256; number++) {
		int bin = number, bin_number = 0, counter = 1;
		while (bin != 0) {
			bin_number += bin % 2 * counter;
			bin /= 2;
			counter *= 10;
		}

		printf("%d %21d %21o %21x\n", number, bin_number, number, number);

	}

	return 0;
}