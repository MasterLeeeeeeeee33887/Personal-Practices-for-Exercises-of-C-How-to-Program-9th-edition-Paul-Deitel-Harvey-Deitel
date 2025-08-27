#include <stdio.h>

int main(void)
{
	printf("%s", "Enter an odd number between 1 and 19: ");
	int number = 0;
	scanf("%d", &number);


	int odd = (number+1)/2, odd_asterisk = 1;
	int middle = odd;
	for (int x = 1; x <= middle; x++) {
		for (int y = 1; y <= middle; y++) {
			printf("%s", " ");
			if (y == odd) {
				if (number ==1) {
					printf("%s", "*");
					break;
				}
				for (int z = 1; z <= odd_asterisk; z++) {
					printf("%s", "*");
				}

				odd--;
				odd_asterisk += 2;
			}
		}
		puts("");
	}

	odd = 2, odd_asterisk = number - 2;
	int space = 2;
	for (int x = 1; x <= middle; x++) {

			
			
			if (x == odd) {
				if (number == 1) {
					break;
				}
				for (int c = 1; c <= space; c++) {
					printf("%s", " ");
				}
				for (int z = 1; z <= odd_asterisk; z++) {
					printf("%s", "*");
				}

				odd++;
				odd_asterisk -= 2;
				space++;
				puts("");
			}
			
		
	}

	return 0;
}