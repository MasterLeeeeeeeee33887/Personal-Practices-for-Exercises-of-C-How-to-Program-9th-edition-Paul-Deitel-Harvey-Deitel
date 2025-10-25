#include <stdio.h>


int toQualityPoints(int avg);


int main(void)
{
	int avg = 0;
	scanf("%d", &avg);

	printf("%d", toQualityPoints(avg));

	return 0;
}

int toQualityPoints(int avg) {

	if (avg <= 100 && avg >= 90) {
		return 4;
	}
	else if (avg >= 80) {
		return 3;
	}
	else if (avg >= 70) {
		return 2;
	}
	else if (avg >= 60) {
		return 1;
	}
	else {
		return 0;
	}
}