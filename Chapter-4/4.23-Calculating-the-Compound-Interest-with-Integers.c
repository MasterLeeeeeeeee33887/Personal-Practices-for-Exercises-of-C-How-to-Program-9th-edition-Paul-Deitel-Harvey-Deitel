#include <stdio.h>
#include <math.h>

int main(void)
{
	int principal = 100000;
	int rate = 5;

	printf("%4s%21s\n", "Year", "Dollars.Cents");
	int amount = principal;
	for (int year = 1; year <= 10; ++year) {
		amount = amount * (100+rate)/100;
		printf("%4d%21d.%02d\n", year, amount/100, amount%100);

	}




	return 0;
}