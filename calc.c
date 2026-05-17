#include <stdio.h>

int main() {
	char operator = '\0';
	double num1;
	double num2;
	double result;
	
	printf("CALCULATOR PROGRAM:\n");
	printf("enter the first digit num: ");
	scanf("%lf", &num1);
	
	printf("enter an oprator of choice ('+', '-', '*', '/'): ");
	scanf(" %c", &operator);
	
	printf("enter the second digit number: ");
	scanf("%lf", &num2);
	
	switch(operator) {
	case '+':
		result = num1 + num2;
		printf("RESULT: %.4lf\n", result);
		break;
	case '-':
		result = num1 - num2;
		printf("RESULT: %.4lf\n", result);
		break;
	case '*':
		result = num1 * num2;
		printf("RESULT: %.4lf\n", result);
		break;
	case '/':
		result = num1 / num2;
		if(num2 !=0){
			printf("RESULT: %.4lf\n", result);
			break;
		}
		else{
			printf("second number cannot be 0:\n");
		}
	default :
		printf("YOU ENTERED AN INVALID OPERATOR:\n");
		
	}
	
	return 0;
}
