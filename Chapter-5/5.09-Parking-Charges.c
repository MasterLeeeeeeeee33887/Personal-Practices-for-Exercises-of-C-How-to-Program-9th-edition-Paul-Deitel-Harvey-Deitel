#include <stdio.h>


void calculateCharges(int customer, double hours);

double total_hours = 0, total_charges = 0;



int main(void)
{
	printf("%s%20s%20s\n", "Car", "Hours", "Charge");

	calculateCharges(1, 1.5);
	calculateCharges(2, 4.0);
	calculateCharges(3, 24.0);
	printf("%s%16.1f%20.2f\n", "TOTAL", total_hours, total_charges);


	return 0;
}




void calculateCharges(int customer, double hours) {
	if (hours <= 3.0) {
		printf("%d%20.1f%20.2f\n", customer, hours, 2.00);
		total_hours += hours;
		total_charges += 2.00;
		return;
	}
	else {
		double charges = 2.00 + 0.5 * (hours - 3.0);
		if (charges <= 10.00) {
			printf("%d%20.1f%20.2f\n", customer, hours, charges);
			total_hours += hours;
			total_charges += charges;
		}
		else {
			printf("%d%20.1f%20.2f\n", customer, hours, 10.00);
			total_hours += hours;
			total_charges += 10.00;
		}
		return;
	}
}