#include <stdio.h>

int main(void)
{
	int counter = 2;
	while (counter != 0) {
		printf("%d\n", counter);
		counter *= 2;
	}

	return 0;
}