#include <stdio.h>

void square_asterisks(int a, char fillCharacter);
void triangle_asterisks(int a, char fillCharacter);
void z_asterisks(int a, char fillCharacter);

int main(void)
{
	int shape = 0;
	int a = 0;
	char fillCharacter = 0;
	scanf("%d %d %c", &shape, &a, &fillCharacter);

	switch (shape) {
	case 1:
		square_asterisks(a, fillCharacter);
		break;
	case 2:
		triangle_asterisks(a, fillCharacter);
		break;
	case 3:
		z_asterisks(a, fillCharacter);
		break;
	}

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

void triangle_asterisks(int a, char fillCharacter) {
	int c = 1;
	for (int x = 1; x <= a; x++) {
		for (int y = 1; y <= c; y++) {
			printf("%c", fillCharacter);
		}
		c++;
		printf("%s", "\n");

	}

	return 0;
}

void z_asterisks(int a, char fillCharacter) {
	int c = a - 1;
	for (int x = 1; x <= a; x++) {
		if (x == 1 || x == a) {
			for (int y = 1; y <= a; y++) {
				printf("%c", fillCharacter);
			}
			printf("%s", "\n");
		}
		if (x == a) {
			break;
		}
		for (int y = 1; y < c; y++) {
			printf("%s", " ");
		}
		c--;
		printf("%c", fillCharacter);
		printf("%s", "\n");
	}

	return 0;
}
