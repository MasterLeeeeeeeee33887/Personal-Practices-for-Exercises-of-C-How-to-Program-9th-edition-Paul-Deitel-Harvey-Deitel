#include <stdio.h>

int time_in_seconds(int hours, int minutes, int seconds);


int main(void)
{
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d", time_in_seconds(a, b, c));

	return 0;
}


int time_in_seconds(int hours, int minutes, int seconds) {
	return hours * 3600 + minutes * 60 + seconds;
}