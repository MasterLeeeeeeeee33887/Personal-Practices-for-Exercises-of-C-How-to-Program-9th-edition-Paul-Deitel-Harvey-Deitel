#include <stdio.h>

int main(void)
{
	int counter = 0;
	while (counter < 100) {
		printf("%s", "*");
		counter++;
		if (counter % 10 == 0) {
			puts("");
		}
	}

	return 0;
}