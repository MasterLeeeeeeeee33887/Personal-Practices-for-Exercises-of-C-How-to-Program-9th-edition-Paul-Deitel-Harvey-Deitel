#include <stdio.h>

int main(void)
{
	int product = 1;
	for (int x = 1; x <= 15; x += 2) {
		product *= x;
	}
	printf("The product of odd integers from 1 to 15 is %d", product);

	return 0;
}