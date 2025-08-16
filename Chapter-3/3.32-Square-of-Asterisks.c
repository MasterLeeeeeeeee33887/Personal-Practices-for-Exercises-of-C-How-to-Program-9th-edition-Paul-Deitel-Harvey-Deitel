#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the size of the side of the asterisk square: ");
	int size = 0;
	scanf("%d", &size);
	int counter1 = 1, counter2 = 1;
	while (counter1 <= size) {
		puts("");
		counter2 = 1;
		while (counter2 <= size) {
			printf("%s", "*");
			counter2++;
		}
		counter1++;
	}
	return 0;
}