#include <stdio.h>
main(void)
{
	float gallon = 0;
	float mile = 0;
	float total = 0;
	int counter = 0;
	printf("%s", "Enter the gallons used (-1 to end): ");
	scanf("%f", &gallon);
	if (gallon == -1) {
		printf("%s", "No results were recorded.\n");
	}
	else {
		printf("%s", "Enter the miles driven: ");
		scanf("%f", &mile);
		printf("The miles/gallon for this tank was %f\n\n", (mile / gallon));
		total += (mile / gallon);
		counter++;
	}


	while (gallon != -1){
		printf("%s", "Enter the gallons used (-1 to end): ");
		scanf("%f", &gallon);
		if (gallon == -1) {
			break;
		}
		printf("%s", "Enter the miles driven: ");
		scanf("%f", &mile);
		printf("The miles/gallon for this tank was %f\n\n", (mile / gallon));
		total += (mile / gallon);
		counter++;
	}
	printf("The overall average miles/gallon was %f", total/ counter);

	return 0;

}