#include <stdio.h>
#include "function.h"

void compare_choice(int user_choice, int computer_choice){
	if(computer_choice > user_choice){
		printf("YOU LOOSE!\n");
	}
	
	else if (user_choice > computer_choice){
		printf("YOU WIN!\n");
	}
	
	else{
		printf("IT'S A TIE\n");
	}

}
