#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void)
{
	srand((unsigned int)time(NULL));
	printf("%s\n%s\n%s\n", "I have a number between 1 and 1000.", "Can you guess my number?", "Please type your first guess.");
	int guess = 0, flag = 1, num = rand() % 1000 + 1, count = 1;
	char c = 0;

	do {
		scanf("%d", &guess);
		printf("%d%s", count, ". ");
		count++;
		if (guess == num) {
			if ((count - 1) < 10) {
				printf("%s\n", "Either you know the secret or you got lucky!");
			}
			else if ((count - 1) == 10) {
				printf("%s\n", "Aha! You know the secret!");
			}
			else {
				printf("%s\n", "You should be able to do better!");
			}

			printf("%s", "Excellent! You guessed the number!\nWould you like to play again (y or n)?");
			scanf(" %c", &c);
			if (c == 'y') {
				num = rand() % 1000 + 1;
				printf("\n%s\n%s\n%s\n", "I have a number between 1 and 1000.", "Can you guess my number?", "Please type your first guess.");
				count = 1;
			}
			else {
				break;
				return 0;
			}
		}
		else if (guess < num) {
			printf("%s\n", "Too low. Try again.");
		}
		else {
			printf("%s\n", "Too high. Try again.");
		}

	} while (1);

	return 0;
}