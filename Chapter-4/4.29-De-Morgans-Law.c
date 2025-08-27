#include <stdio.h>

int main(void)
{
	//a)
	int x = 5, y = 6;
	if (!(x < 5) && !(y >= 7)) {
		printf("%s", "Yes, De Morgan's Law is real.\n");
	}
	if ((x>= 5) && (y < 7)) {
		printf("%s", "Yes, De Morgan's Law is real for true.\n");
	}
	//b)
	int a = 1, b = 1, g = 5;
	if (!(a == b) || !(g != 5)) {
		printf("%s", "Yes, De Morgan's Law is real for true as expected.\n");
	}
	if ((a != b) || (g == 5)) {
		printf("%s", "Yes, De Morgan's Law is real for true as expected for real.\n");
	}
	//c)
	x = 9;
	if (!((x <= 8) && (y > 4))) {
		printf("%s", "Yes, De Morgan's Law is real for true as expected for real no fake.\n");
	}
	if ((x > 8) || (y <= 4)) {
		printf("%s", "Yes, De Morgan's Law is real for true as expected for real no fake not gonna lie.\n");
	}
	//d)
	int i = 4, j = 7;
	if (!((i > 4) || (j <= 6))) {
		printf("%s", "Yes, De Morgan's Law is real for true as expected for real no fake not gonna lie absolutely.\n");
	}
	if ((i <= 4) && (j > 6)) {
		printf("%s", "Yes, De Morgan's Law is real for true as expected for real no fake not gonna lie absolutely cinema.\n");
	}

	return 0;
}