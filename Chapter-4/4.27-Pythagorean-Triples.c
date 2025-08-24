#include <stdio.h>

int main(void)
{
	int side1 = 1, side2 = 1, hyp = 1;

	for (int side1 = 1; side1 <= 500; side1++) {

		for (int side2 = 1; side2 <= 500; side2++) {
			
			int side_sum = side1 * side1 + side2 * side2;


			for (int hyp = 1; hyp <= 500; hyp++) {
	
				int hyp_sum = hyp * hyp;

				if (side_sum == hyp_sum) {
					printf("Pythagorean triple: %d %d %d\n", side1, side2, hyp);
					break;
				}


			}

		}

	}

	return 0;
}