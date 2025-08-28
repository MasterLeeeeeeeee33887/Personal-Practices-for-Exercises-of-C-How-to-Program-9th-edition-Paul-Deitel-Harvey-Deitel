#include <stdio.h>

int main(void)
{
	float x = 1000000.00;
	x += 0.12f;
	printf("%.2f", x);

	return 0;
}