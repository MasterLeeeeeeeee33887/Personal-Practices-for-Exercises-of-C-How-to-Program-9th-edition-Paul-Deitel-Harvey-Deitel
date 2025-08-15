#include <stdio.h>

int main(void)
{
	printf("%s", "N \t 10*N \t 100*N \t 1000*N\n");
	int counter = 1;
	while (counter <= 10) {
		printf("%d \t %d \t %d \t %d\n", counter, 10*counter, 100*counter, 1000*counter);
		counter++;
	}
	return 0;
}