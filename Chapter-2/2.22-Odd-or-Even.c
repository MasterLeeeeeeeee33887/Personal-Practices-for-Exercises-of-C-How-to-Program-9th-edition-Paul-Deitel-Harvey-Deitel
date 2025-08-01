#include <stdio.h>

int main(void)
{
	printf("%s", "Enter an integer: ");
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("It's even.");
	}
	else {
		printf("It's odd.");
	}
	return 0;
}