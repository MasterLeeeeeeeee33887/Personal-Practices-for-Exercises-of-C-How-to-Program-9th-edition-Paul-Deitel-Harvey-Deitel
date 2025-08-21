#include <stdio.h>

int main(void)
{
	int sum = 0;
	for (int x = 0; x <= 30; x += 2) {
		sum += x;

	}
	printf("The sum of even integers from 2 to 30 is %d", sum);

	return 0;
}