#include <stdio.h>
#include <math.h>


int main(void)
{
	double x = 0;
	printf("%s", "Enter a number(-1 to exit): ");
	scanf("%lf", &x);
	if (x == -1) {
		return 0;
	}
	int y = floor(x+0.5);
	printf("%lf\t%d\n", x, y);

	while (x != -1) {
		printf("%s", "Enter a number(-1 to exit): ");
		scanf("%lf", &x);
		if (x == -1) {
			break;
		}
		int y = floor(x+0.5);
		printf("%lf\t%d\n", x, y);
	}
	return 0;
}
