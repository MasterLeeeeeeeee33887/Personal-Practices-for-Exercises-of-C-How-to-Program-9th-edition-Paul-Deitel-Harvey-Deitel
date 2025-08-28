#include <stdio.h>


//https://www.worldometers.info/world-population/
int main(void)
{
	long long year = 1, population = 8243167084;
	double rate = 0.0085;
	long long increase = (double)population * rate;
	printf("%s%21s%21s\n", "Year", "Population", "Increase");
	for (; year <= 75; year++) {
		printf("%d%21lld%21lld\n", year, population, increase);
		population += increase;
		increase = (double)population * rate;
	}


	return 0;
}