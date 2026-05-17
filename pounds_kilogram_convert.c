#include <stdio.h>

int main(void){
	// KILOGRAM TO POUNDS CONVERSION
	int choice = 0;
	float kilogram = 0.0f;
	float pounds = 0.0f;
	
	printf("KILOGRAM TO POUNDS CONVERSION:\n");	 
	printf("1: pounds to kilograms:\n");
	printf("2: kilograms to pounds:\n");
	printf("ENTER '1' (POUNDS) OR '2' (KILOGRAM) TO MAKE A CONVERTION:");
	scanf("%d", &choice);
	
	if (choice == 1) {
		//COVERTS TO POUNDS
		printf("TYPE POUNDS AMOUNT CONVERT:");
		scanf("%f", &kilogram);
		pounds = kilogram * 2.20462;
		printf("%.2f kilogram is equal to %.2f pounds\n", kilogram, pounds);
	
	}
	else if (choice == 2) {
		//CONVERTS TO KILOGRAM
		printf("TYPE KILOGRAM AMOUNT TO CONVERT:");
		scanf("%f", &pounds);
		kilogram = pounds / 2.20462;
		printf("%.2f pounds is equal to %.2f kilogram\n", pounds, kilogram);
	
	}
	
	else {
		printf("you've entered an invalid type, pls chooose 1 or 2:\n");
	}
	
	return 0;
}
