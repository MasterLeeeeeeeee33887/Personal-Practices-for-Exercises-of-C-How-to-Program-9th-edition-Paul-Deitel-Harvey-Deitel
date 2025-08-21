#include <stdio.h>

int main(void)
{
	int counter = 1;
	for (; counter <= 5; ++counter) {
		printf("%d ", counter);
	}
	printf("%d", counter);
	puts("");

	return 0;
}