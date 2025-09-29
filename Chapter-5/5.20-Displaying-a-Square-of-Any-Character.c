#include <stdio.h>

void square_asterisks(int a, char fillCharacter);

int main(void)
{
	int a = 0;
	char fillCharacter = 0;
	scanf("%d %c", &a, &fillCharacter);

	square_asterisks(a, fillCharacter);

	return 0;
}

void square_asterisks(int a, char fillCharacter) {
	for (int x = 1; x <= a; x++) {
		for (int y = 1; y <= a; y++) {
			printf("%c", fillCharacter);
		}
		printf("%s", "\n");

	}

	return 0;
}