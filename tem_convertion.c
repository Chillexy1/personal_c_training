#include <stdio.h>

int main(){
	char choice = '\0';
	float fahren  ;
	float celsius ;
	
	printf("TEMPERATURE CONVERTION PROGRAM: \n");
	printf("F. convert from fahrenheit to celsius:\n");
	printf("C. convert from celsius to fahrenheit:\n");
	printf("make a choice of temp_convertion character 'c' or 'f':");
	scanf("%c", &choice);
	
	if (choice == 'c'){
		printf("enter temp of celsius: ");
		scanf("%f", &celsius);
		fahren = (celsius * 9/5) + 32;// formula to determine a fahrenheit.
		printf("%.1f celsius is equal to %.1f fahrenheit.\n",celsius,fahren);
	
	}
	else if (choice == 'f') {
		printf("enter temp of fahrenheit: ");
		scanf("%f", &fahren);
		celsius = (fahren - 32) *5/9;// formula to determine a celsius.
		printf("%.1f fahrenheit is equal to %.1f celsius.\n",fahren,celsius);
	
	}
	else{
		printf("INVALID INPUT! PLEASE SELECT 'F' OR 'C':\n");
	}
	
	return 0;
}
