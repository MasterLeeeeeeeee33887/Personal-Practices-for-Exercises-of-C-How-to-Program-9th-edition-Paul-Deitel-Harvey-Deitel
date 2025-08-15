#include <stdio.h>

int main(void)
{
	printf("%s", "Enter 10 non-negative numbers: ");
	int counter = 1, number = 0, largest = 0, seclargest = 0;
	while (counter <= 10) {
		scanf("%d", &number);
		if (counter == 1) {
			largest = number;
		}
		else if (counter == 2 && number <= largest) {
			seclargest = number;
		}
		else if (counter == 2 && number > largest) {
			seclargest = largest;
			largest = number;
		}
		else if (counter >=3 && number >= largest) {
			seclargest = largest;
			largest = number;
		}
		else if (counter >= 3 && number >= seclargest) {
			seclargest = number;
		}
		counter++;
	}


	printf("The larest and the second largest are: %d and %d", largest, seclargest);

	return 0;
}