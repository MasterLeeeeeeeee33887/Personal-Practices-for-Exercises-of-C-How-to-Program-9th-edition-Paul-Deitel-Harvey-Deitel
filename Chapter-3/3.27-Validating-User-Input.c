#include <stdio.h>

int main(void)
{
	int counter = 1, result = 0, pass = 0, fail = 0;
	while (counter <= 10) {
		printf("%s", "Enter Result (1=pass, 2=fail): ");
		scanf("%d", &result);
		if ((result != 1) && (result != 2)) {
			counter--;
		}
		else if (result == 1) {
			pass++;
		}
		else if (result == 2) {
			fail++;
		}
		counter++;
	}

	printf("Passed %d\n", pass);
	printf("Failed %d", fail);
	return 0;
}