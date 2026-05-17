#include <stdio.h>
#include <stdbool.h>


int main() {
	bool isrunning  = true;
	char response = '\0';
	
	
	while(isrunning) {
		printf("game of y=yes or n=no:\n");
		printf("would you like to continue?: ");
		scanf(" %c", &response);
		
		if(response == 'n' || response == 'N'){
			isrunning = false;
		
		}
	
	}
	printf("you've exited the game.\n");
	
	return 0;
}
