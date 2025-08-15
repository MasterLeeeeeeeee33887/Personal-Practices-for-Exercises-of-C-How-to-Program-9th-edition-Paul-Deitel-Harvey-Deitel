#include <stdio.h>

int main(void)
{
	printf("%s", "A \t A+2 \t A+4 \t A+6\n");
	int counter = 3;
	while (counter <= 15) {
		printf("%d \t %d \t %d \t %d\n", counter, counter + 2, counter + 4, counter + 6);
		counter += 3;
	}

	return 0;
}