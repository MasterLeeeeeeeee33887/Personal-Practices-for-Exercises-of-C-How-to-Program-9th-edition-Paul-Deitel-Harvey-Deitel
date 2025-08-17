#include <stdio.h>



/*
Write a program that calculates world popula
tion growth each year for the next 100 years, using the simplifying assumption that the
 current growth rate will stay constant. Print the results in a table. The first column
 should display the year from 1 to 100. The second column should display the antic
ipated world population at the end of that year. The third column should display the
 numerical increase in the world population that would occur that year. Using your
 results, determine the years in which the population would become double and
 eventually quadruple what it is today.
*/


//https://en.wikipedia.org/wiki/Population_growth

int main(void)
{
	unsigned long long int population = 7503828180;
	unsigned long long int increase = 0;
	double rate = 0.008;
	int year = 1;
	int doubling_year = 0;
	int quadrupling_year = 0;


	printf("%s", "Year \t Population \t Increase \n");
	while (year <= 100) {
		increase = population * rate;
		population += increase;
		printf("%d \t  %llu \t %llu\n", year, population, increase);

		if (population >= 2 * 7503828180 && doubling_year ==0) {
			doubling_year = year;
		}
		if (population >= 4 * 7503828180) {
			quadrupling_year = year;
		}


		year++;
	}
	printf("\nThe doubling year is at the %dth year, and the quadrupling year is beyond 100 years.", doubling_year);

	return 0;
}