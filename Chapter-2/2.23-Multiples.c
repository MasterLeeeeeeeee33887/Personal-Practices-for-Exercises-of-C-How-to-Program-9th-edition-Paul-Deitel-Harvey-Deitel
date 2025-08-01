#include <stdio.h>

int main(void)
{
	printf("%s", "Enter two integers: ");
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a % b == 0) {
		printf("%d is a multiple of %d.", a, b);
	}
	else {
		printf("%d isn't a multiple of %d", a, b);
	}
	return 0;
}