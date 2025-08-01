#include <stdio.h>

int main(void)

{
	printf("%s", "Enter two integers: ");
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a < b) {
		printf("%d is larger", b);
	}
	else if (a > b) {
		printf("%d is larger", a);
	}
	else {
		printf("These numbers are equal.");
	}
	return 0;
}