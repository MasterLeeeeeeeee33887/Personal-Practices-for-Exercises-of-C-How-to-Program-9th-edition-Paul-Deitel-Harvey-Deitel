#include <stdio.h>

void separate_digits(int a);

int main(void)
{
	int a = 0;
	scanf("%d", &a);

	separate_digits(a);

	return 0;
}

void separate_digits(int a) {
	int position = 10;
	while (1) {
		if (a / position == 0) {
			position /= 10;
			break;
		}
		else {
			position *= 10;
		}
	}

	while (a != 0) {
		printf("%d  ", a / position);
		a = a - a / position * position;
		position /= 10;
	}
}