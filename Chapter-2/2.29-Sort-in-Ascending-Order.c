#include <stdio.h>

int main(void)
{
	printf("%s", "Enter three different integers: ");
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b) {
		if (b >= c) {
			printf("%d %d %d", c, b, a);
		}
		else if (c >= b) {
			if (a >= c) {
				printf("%d %d %d", b, c, a);
			}
			else if (c >= a) {
				printf("%d %d %d", b, a, c);
			}
		}
	}
	else if (b >= a) {
		if (a >= c) {
			printf("%d %d %d", c, a, b);
		}
		else if (c >= a) {
			if (b >= c) {
				printf("%d %d %d", a, c, b);
			}
			else if (c >= b) {
				printf("%d %d %d", a, b, c);
			}
		}
	}
	/*else if (a >= c) {
		if (c >= b) {
			printf("%d %d %d", b, c, a);
		}
		else if (b >= c) {
			if (a >= b) {
				printf("%d %d %d", c, b, a);
			}
			else if (b >= a) {
				printf("%d %d %d", c, a, b);
			}
		}
	}
	else if (c >= a) {
		if (a >= b) {
			printf("%d %d %d", b, a, c);
		}
		else if (b >= a) {
			if (c >= b) {
				printf("%d %d %d", a, b, c);
			}
			else if (b >= c) {
				printf("%d %d %d", a, c, b);
			}
		}
	}
	else if (b >= c) {
		if (c >= a) {
			printf("%d %d %d", a, c, b);
		}
		else if (a >= c) {
			if (a >= b){
				printf("%d %d %d", c, b, a);
			}
			else if (b >= a) {
				printf("%d %d %d", c, a, b);
			}
		}
	}
	else if (c >= b) {
		if (b >= a) {
			printf("%d %d %d", a, b, c);
		}
		else if (a >= b) {
			if (c >= a) {
				printf("%d %d %d", b, a, c);
			}
			else if (a >= c) {
				printf("%d %d %d", b, c, a);
			}
		}
	}
	*/
	return 0;
}