#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("fabs(7.5)=%f\n", fabs(7.5));
	printf("floor(7.5)=%f\n", floor(7.5));
	printf("fabs(0.0)=%f\n", fabs(0.0));
	printf("ceil(0.0)=%f\n", ceil(0.0));
	printf("fabs(-6.4)=%f\n", fabs(-6.4));
	printf("ceil(-6.4)=%f\n", ceil(-6.4));
	printf("ceil(-fabs(-8+floor(-5.5)))=%f\n", ceil(-fabs(-8 + floor(-5.5))));

	return 0;
}