#include <stdio.h>
#include <stdbool.h>

bool isMultiple(int a, int b);


int main(void)
{
	int a, b = 0;
	scanf("%d %d", &a, &b);

	printf("%d", isMultiple(a, b));

	return 0;
}

bool isMultiple(int a, int b) {
	if (b % a == 0) {
		return true;
	}
	else {
		return false;
	}
}