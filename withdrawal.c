#include <stdio.h>
#include "function.h"

float withdraw(float balance)
{
	float amount = 0.0f;
	printf("enter an amount to withdraw: $");
	scanf("%f", &amount);
	
	if (amount < 0 ){
		printf("pls enter a valid amount to withdraw\n");
		return 0.0;
	}
	else if (amount > balance)
	{
		printf("sorry!, insufficient funds\n");
		return 0.0;
	}
	else{
		printf("you've successful withdrawn $%.2f\n", amount);
		return amount;
	}
}
