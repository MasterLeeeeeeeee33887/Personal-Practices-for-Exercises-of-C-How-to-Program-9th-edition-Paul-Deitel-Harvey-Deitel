#include <stdio.h>

void square_asterisks(int a);


int main(void)
{
	int a = 0;
	scanf("%d", &a);

	square_asterisks(a);

	return 0;
}

void square_asterisks(int a) {
	for (int x = 1; x <= a; x++) {
		for (int y = 1; y <= a; y++) {
			printf("%s", "*");
		}
		printf("%s", "\n");

	}

	return 0;
}