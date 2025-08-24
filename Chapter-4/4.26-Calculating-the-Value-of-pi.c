#include <stdio.h>

int main(void)
{
	printf("%s%21s\n", "Terms", "Pi");
	double pi = 0, parity = 1;
	for (int x = 1; x <= 500000; x++) {

		if (parity == 1) {
			pi += 4 / (2*(double)x-1);
			parity = 0;
		}
		else {
			pi -= 4 / (2 * (double)x - 1);
			parity = 1;
		}
		printf("%d%21f\n", x, pi);

	}











	return 0;
}