#include <stdio.h>
#include "function.h"

float deposit()
{
	float amount = 0.0f;
	
	printf("enter amount to deposit: $");
	scanf("%f", &amount);
	
	if (amount < 0)
	{
		printf("you've entered an invalid amount\n");
		return 0.0;
	}
	else{
		printf("you've successfuly deposited $%.2f\n", amount);
		return amount;
	}
}
