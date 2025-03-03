#include <stdio.h>

int main(void)
{
	int a = 5;
	printf("%s", "Here comes an integer a = 5.\nWith two while loops demonstrating the difference between --a and a--.\n");
	printf("%s", "The while loops end when the current value of a goes to 0.\n");
	while (a != 0) {
		printf("Predecrementing is a = %d\n", --a);
	}
	a = 5;
	while (a != 0) {
		printf("Postdecrementing is a = %d\n", a--);
	}
	
	return 0;
}