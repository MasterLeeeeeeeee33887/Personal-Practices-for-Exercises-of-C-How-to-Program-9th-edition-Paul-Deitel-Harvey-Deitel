#include <stdio.h>

int main(void)
{
	printf("%s", "Enter your age : ");
	int age = 0;
	scanf("%d", &age);
	int max_heart_rate = 220 - age;
	printf("Your maximum heart rate is: %d\n", max_heart_rate);
	printf("Your target heart rate is from %f to %f", 0.5 * max_heart_rate, 0.85 * max_heart_rate);
	return 0;
}