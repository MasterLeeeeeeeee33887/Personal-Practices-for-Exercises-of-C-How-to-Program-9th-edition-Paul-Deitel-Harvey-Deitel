#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the size for a side of the asterisk square: ");
	int size = 0;
	scanf("%d", &size);
	//counter1: row indices; counter2: column indices
	int counter1 = 1, counter2 = 1;
		while (counter1 < size) {
			while (counter2 <= size) {
				printf("%s", "*");
				counter2++;
			}
			counter1++;
			puts("");
			counter2 = 1;
			if ( (counter1 < size) && !(counter1 > size) ) {
				printf("%s", "*");
				while (counter2 < size-1) {
					printf("%s", " ");
					counter2++;
					if (counter2 == size - 1) {
						counter2 += 2;
					}
				}
				printf("%s", "*");
			}
			else {
				while (counter2 <= size) {
					printf("%s", "*");
					counter2++;
				}
			}
		}
	return 0;
}