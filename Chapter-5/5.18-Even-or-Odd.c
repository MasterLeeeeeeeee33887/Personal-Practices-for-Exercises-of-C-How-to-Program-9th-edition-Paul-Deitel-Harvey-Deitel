#include <stdio.h>
#include <stdbool.h>

bool isEven(int a);

int main(void)
{
	int a = 0;
	printf("%s", "Enter an integer to see whether it's even or odd(-1 to exit): ");
	scanf("%d", &a);
	if (a == -1) {
		return 0;
	}
	
	printf("%d\n", isEven(a));

	while (a != -1) {
		printf("%s", "Enter an integer to see whether it's even or odd(-1 to exit):");
		scanf("%d", &a);

		printf("%d\n", isEven(a));
	}

	return 0;
}

bool isEven(int a) {
	if (a % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}