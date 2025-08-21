#include <stdio.h>

int main(void)
{
	printf("(%c)\n", 'A');
	for (int x = 1; x <= 10; x++) {

		for (int y = 1; y <= x; y++) {
			printf("%s", "*");
		}
		puts("");

	}
	puts("");
	printf("(%c)\n", 'B');
	for (int x = 1; x <= 10; x++) {

		for (int y = 10; y >= x; y--) {
			printf("%s", "*");
		}
		puts("");

	}
	puts("");
	printf("(%c)\n", 'C');
	for (int x = 1; x <= 10; x++) {

		
		for (int z = 0; z < x; z++) {
			printf("%s", " ");

		}

		for (int y = 10; y >= x; y--) {
			printf("%s", "*");
		}
		puts("");

	}
	puts("");

	printf("(%c)\n", 'D');
	for (int x = 1; x <= 10; x++) {


		for (int z = 10; z >= x; z--) {
			printf("%s", " ");

		}

		for (int y = 1; y <= x; y++) {
			printf("%s", "*");
		}
		puts("");

	}
	puts("");




	return 0;
}