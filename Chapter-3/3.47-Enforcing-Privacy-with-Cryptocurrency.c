#include <stdio.h>

/*
A company that wants to send data over the Internet has
 asked you to write a program that will encrypt it so that it may be transmitted more
 securely. All the data is transmitted as four-digit integers. Your application should
 read a four-digit integer entered by the user and encrypt it as follows: Replace each
 digit with the result of adding 7 to the digit and getting the remainder after dividing
 the new value by 10. Then swap the first digit with the third, and swap the second
 digit with the fourth. Then print the encrypted integer. Write a separate application
 that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption
 scheme) to form the original number. [Optional reading project: In industrial-strength
 applications, you’ll want to use much stronger encryption techniques than presented
 in this exercise. Research “public-key cryptography” in general and the PGP (Pretty
 Good Privacy) specific public-key scheme. You may also want to investigate the RSA
 scheme, which is widely used in industrial-strength applications.]

*/


int main(void)
{
	printf("%s", "Enter a four-digit integer: ");
	int number = 0;
	scanf("%04d", &number);
	int encrypted_number = 0;
	int decimal = 1;
	int curr = 0;
	int counter = 1;
	while(counter <= 4) {
		if (decimal == 1) {
			curr = (number % 10 + 7) % 10;
			encrypted_number += curr * decimal * 100;
		}
		if (decimal == 10) {
			curr = (number % 10 + 7) % 10;
			encrypted_number += curr * decimal * 100;
		}
		if (decimal == 100) {
			curr = (number % 10 + 7) % 10;
			encrypted_number += curr * decimal / 100;
		}
		if (decimal == 1000) {
			curr = (number % 10 + 7) % 10;
			encrypted_number += curr * decimal / 100;
		}
		counter++;
		decimal *= 10;
		number /= 10;
	}
	printf("The encrypted four-digits integer is %04d.", encrypted_number);


	return 0;
}


/*
int main(void)
{
	printf("%s", "Enter the encrypted four-digit integer: ");
	
	int encrypted_number = 0;
	scanf("%04d", &encrypted_number);
	int number = 0;
	int decimal = 1;
	int curr = 0;
	int counter = 1;
	while (counter<=4) {
		if (decimal == 1) {
			curr = encrypted_number % 10;

			if (curr == 7 || curr == 8 || curr == 9) {
				curr -= 7;
				number += curr * decimal * 100;
			}
			else if (curr == 0) {
				curr = 10;
				curr -= 7;
				number += curr * decimal * 100;
			}
			else {
				curr += 10;
				curr -= 7;
				number += curr * decimal * 100;
			}
		}
		if (decimal == 10) {
			curr = encrypted_number % 10;
			if (curr == 7 || curr == 8 || curr == 9) {
				curr -= 7;
				number += curr * decimal * 100;
			}
			else if (curr == 0) {
				curr = 10;
				curr -= 7;
				number += curr * decimal * 100;
			}
			else {
				curr += 10;
				curr -= 7;
				number += curr * decimal * 100;
			}
		}
		if (decimal == 100) {
			curr = encrypted_number % 10;
			if (curr == 7 || curr == 8 || curr == 9) {
				curr -= 7;
				number += curr * decimal / 100;
			}
			else if (curr == 0) {
				curr = 10;
				curr -= 7;
				number += curr * decimal / 100;
			}
			else {
				curr += 10;
				curr -= 7;
				number += curr * decimal / 100;
			}
		}
		if (decimal == 1000) {
			curr = encrypted_number % 10;
			if (curr == 7 || curr == 8 || curr == 9) {
				curr -= 7;
				number += curr * decimal / 100;
			}
			else if (curr == 0) {
				curr = 10;
				curr -= 7;
				number += curr * decimal / 100;
			}
			else {
				curr += 10;
				curr -= 7;
				number += curr * decimal / 100;
			}
		}
		counter++;
		decimal *= 10;
		encrypted_number /= 10;                                                                                      
	}
	printf("The decrypted four-digits integer is %04d.", number);


	return 0;
}
*/
