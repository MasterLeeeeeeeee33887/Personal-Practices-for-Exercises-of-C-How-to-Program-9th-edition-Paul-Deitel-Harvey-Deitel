#include <stdio.h>

int main(void)
{
	printf("%10s %10s\n", "Decimals", "Roman_Numerals");
	int number_I = 1;
	int temp = 0;
	for (int i = 1; i <= 100; i++) {
		printf("%10d%10s", i, "");
		if (i < 4) {
			for (int x = 1; x <= i; x++) {
				printf("%s", "I");
			}
			puts("");
		}
		else if (i == 4) {
			printf("%s", "IV");
			puts("");
		}
		else if (i == 5) {
			printf("%s", "V");
			puts("");
		}
		else if (i <= 8) {
			printf("%s", "V");
			for (int x = 1; x <= number_I; x++) {
				printf("%s", "I");
			}
			puts("");
			number_I++;
		}
		else if (i == 9) {
			printf("%s", "IX");
			puts("");
			number_I = 1;
		}
		else if (i == 10) {
			printf("%s", "X");
			puts("");
			temp = 1;
		}
		else if (i <= 20) {
			if (temp < 4) {
				printf("%s", "X");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "X");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "X");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "X");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "X");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "X");
				printf("%s", "X");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 30) {
			if (temp < 4) {
				printf("%s", "XX");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "XX");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "XX");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "XX");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "XX");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "XX");
				printf("%s", "X");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 40) {
			if (temp < 4) {
				printf("%s", "XXX");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "XXX");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "XXX");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "XXX");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "XXX");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "X");
				printf("%s", "L");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 50) {
			if (temp < 4) {
				printf("%s", "XL");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "XL");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "XL");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "XL");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "XL");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "L");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 60) {
			if (temp < 4) {
				printf("%s", "L");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "L");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "L");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "L");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "L");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "L");
				printf("%s", "X");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 70) {
			if (temp < 4) {
				printf("%s", "LX");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "LX");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "LX");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "LX");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "LX");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "LX");
				printf("%s", "X");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 80) {
			if (temp < 4) {
				printf("%s", "LXX");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "LXX");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "LXX");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "LXX");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "LXX");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "LXX");
				printf("%s", "X");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 90) {
			if (temp < 4) {
				printf("%s", "LXXX");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "LXXX");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "LXXX");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "LXXX");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "LXXX");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "X");
				printf("%s", "C");
				puts("");
				temp = 1;
			}
		}
		else if (i <= 100) {
			if (temp < 4) {
				printf("%s", "XC");
				for (int x = 1; x <= temp; x++) {
					printf("%s", "I");
				}
				puts("");
				temp++;
			}
			else if (temp == 4) {
				printf("%s", "XC");
				printf("%s", "IV");
				puts("");
				temp++;
			}
			else if (temp == 5) {
				printf("%s", "XC");
				printf("%s", "V");
				puts("");
				temp++;
			}
			else if (temp <= 8) {
				printf("%s", "XC");
				printf("%s", "V");
				for (int x = 1; x <= number_I; x++) {
					printf("%s", "I");
				}
				puts("");
				number_I++;
				temp++;
			}
			else if (temp == 9) {
				printf("%s", "XC");
				printf("%s", "IX");
				puts("");
				number_I = 1;
				temp++;
			}
			else if (temp == 10) {
				printf("%s", "C");
				puts("");
				temp = 1;
			}
		}




	}









	return 0;
}