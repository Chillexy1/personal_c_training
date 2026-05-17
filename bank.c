#include <stdio.h>
#include "function.h"

int main()
{
	int choice;
	float balance = 0.0f;
	printf("**WELCOME TO CHILLEXY BANK**\n");
	do{
		printf("1. Balance:\n");
		printf("2. Deposit:\n");
		printf("3. Withdraw:\n");
		printf("4. EXIT:\n");
		printf("SELECT AN OPTION FROM 1-4: ");
		if(scanf("%d", &choice) != 1) // checks for invalid input
		{
			printf("invalid input, pick a valid option:\n");
			while(getchar() != '\0'); // clears the invalid input 
			choice = 0;
		}
		switch (choice){
		case 1:
			checkbalance(balance);
			break;
		case 2:
			balance += deposit(); 
			break;
		case 3:
			balance -= withdraw(balance);
			break;
		case 4:
			printf("THANKS FOR BANKING WITH US @ CHILLEXY LMT\n");
			break;
		default :
			printf("you've typed in an invalid option!\n");
			break;
		
		}
	}while (choice != 4);


	return 0;
}
