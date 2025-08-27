#include <stdio.h>

int main(void)
{
	int odd = 5, odd_asterisk = 1;
	for (int x = 1; x <= 5; x++) {
		
		
		for (int y = 1; y <= 9; y++) {
			if (y == odd) {
				for (int z = 1; z <= odd_asterisk; z++) {
					printf("%s", "*");
				}
				odd_asterisk += 2;
				odd--;
				continue;
			}
			printf("%s", " ");

		}
		puts("");
	}
	odd = 2, odd_asterisk = 7;
	int flag = 1;
	for (int x = 1; x <= 4; x++) {

		for (int y = 1; y <= 5; y++) {
			
			if (y == odd) {
				for (int z = 1; z <= odd_asterisk; z++) {
					printf("%s", "*");
				}
				odd_asterisk -= 2;
				odd++;
				puts("");

			}
			for (int c = 1; c <= flag; c++) {
				printf("%s", " ");
			}
			flag++;

		}
		
	}








	return 0;
}