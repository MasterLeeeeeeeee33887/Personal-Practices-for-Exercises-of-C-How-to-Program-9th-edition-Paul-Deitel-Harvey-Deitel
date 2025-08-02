#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a five-digit number: ");
	int a = 0;
	scanf("%d", &a);
	printf("%d %d %d %d %d", (a/10000)%10, (a / 1000) % 10, (a / 100) % 10, (a / 10) % 10, a % 10);
	return 0;
}