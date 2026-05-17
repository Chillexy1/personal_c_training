#include <stdio.h>
#include "function.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	int computer = computer_choice();
	int user = user_choice();
	
	switch (computer)
	{
	case 1:
		printf("computer choose 'ROCK':\n");
		break;
	case 2:
		printf("computer choose 'PAPER':\n");
		break;
	case 3:
		printf("computer choose 'SCISSORS':\n");
		break;
	}
	
	switch (user)
	{
	case 1:
		printf("user choose 'ROCK':\n");
		break;
	case 2:
		printf("user choose 'PAPER':\n");
		break;
	case 3:
		printf("user choose 'SCISSORS':\n");
		break;
	}
	
	compare_choice(user, computer);
  

	return 0;
}
