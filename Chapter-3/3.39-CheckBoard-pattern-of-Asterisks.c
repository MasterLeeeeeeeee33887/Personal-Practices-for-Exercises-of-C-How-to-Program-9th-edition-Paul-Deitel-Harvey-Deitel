#include <stdio.h>

int main(void)
{
	int counter1 = 1, counter2 = 1, on_off=0;
	while (counter1 <= 8) {
		if (on_off == 0) {
			while (counter2 <= 8) {
				printf("%s", "* ");
				counter2++;
			}
			puts("");
			counter2 = 1;
			on_off = 1;
		}
		else {
			while (counter2 <= 8) {
				printf("%s", " *");
				counter2++;
			}
			puts("");
			counter2 = 1;
			on_off = 0;
		}
		counter1++;
	}

	return 0;
}