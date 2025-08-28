#include <stdio.h>


//https://www.worldometers.info/world-population/
int main(void)
{
	int year = 1;
	long long population = 8243167084;
	double rate = 0.0085;
	long long increase = (double)population * rate;
	int doubling_year = 0;
	printf("%s%21s%21s\n", "Year", "Population", "Increase");
	for (; year <= 75; year++) {
		printf("%d%21lld%21lld\n", year, population, increase);
		population += increase;
		increase = (double)population * rate;


		if (population >= 2 * 8243167084 && doubling_year == 0) {
			doubling_year = year;
		}
	}
	printf("%s", "\nThe doubling year is beyond 75 years");

	return 0;
}
