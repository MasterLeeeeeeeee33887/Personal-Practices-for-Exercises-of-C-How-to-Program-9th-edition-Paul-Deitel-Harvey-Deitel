#include <stdio.h>

int main(void)
{
	int number = 0;
	for (int x = 1; x <= 5; x++) {
		scanf("%d", &number);

		for (int counted = 1; counted <= number; counted++) {
			printf("%s", "*");

		}
		puts("");
	}

	return 0;
}