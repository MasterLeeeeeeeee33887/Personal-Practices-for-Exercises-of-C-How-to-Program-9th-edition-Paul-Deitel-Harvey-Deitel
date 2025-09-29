#include <stdio.h>

int toCelsius(int t);
int toFahrenheit(int t);


int main(void)
{
	printf("%s%20s\n", "Celsius", "toFahrenheit");
	for (int x = 0; x <= 100; x++) {
		printf("%d%20d\n", x, toFahrenheit(x));
	}

	printf("%s%20s\n", "Fahrenheit", "toCelsius");
	for (int x = 32; x <= 212; x++) {
		printf("%d%20d\n", x, toCelsius(x));
	}

	return 0;
}

int toFahrenheit(int t) {
	return t * 1.8 + 32;
}

int toCelsius(int t) {
	return (t - 32) * 5 / 9;
}