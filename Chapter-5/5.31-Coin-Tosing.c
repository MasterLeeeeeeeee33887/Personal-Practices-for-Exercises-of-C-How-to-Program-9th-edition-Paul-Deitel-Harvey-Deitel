#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int flip(void);

int main(void)
{
	srand((unsigned int)time(NULL));
	for (size_t x = 1; x <= 100; x++) {
		if (flip() == 1) {
			printf("%s\n", "Heads");
		}
		else {
			printf("%s\n", "Tails");
		}
	}

	return 0;
}

int flip(void) {
	return rand() % 3;

}