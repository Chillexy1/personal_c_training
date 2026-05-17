#include <stdio.h>

int user_choice()
{
	int choice;
	do{
		printf("1. ROCK;\n");
		printf("2. PAPER;\n");
		printf("3. SCISSORS;\n");
		printf("PICK A NUMBER FROM RANGE 1 - 3 only: ");
		scanf("%d", &choice);
	}while(choice < 1 || choice > 3);
	
	return choice;
}
