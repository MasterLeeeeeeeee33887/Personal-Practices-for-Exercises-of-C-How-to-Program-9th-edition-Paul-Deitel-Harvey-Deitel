#include <stdio.h>

int main(void)
{
	printf("%s",	"Numbers\tFactorials \n");
	for (int y = 1; y <= 20; y++) {
		int number = y;
		printf("%d\t", number);
		int fac = 1;
		for (int x = 1; x <= number; x++) {
			fac *= x;
		}
		printf("%d\n", fac);

	}
	
	return 0;
}