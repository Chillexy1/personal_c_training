#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* THIS IS A NUMBER GUESSING GAME PROGRAM*/
int main() {
	int tries = 0;
	int guess;
	int min = 1;
	int max = 100;
	int answer;
	
	srand(time(NULL));
	
	answer = (rand() % (max - min) + 1) + min;
	
	printf("***NUMBER GUESSING GAME**\n");
	do {
		printf("choose a number between %d - %d:", min, max);
		scanf("%d", &guess);
		tries ++;
		
		if (guess < answer)
		{
			printf("oops!TOO LOW!\n");
		}
		else if(guess > answer)
		{
			printf("TOO HIGH\n");
		}
		else{
			printf("Hurray! Congrats, %d is the correct number\n", guess);
		}
	
	
	}while (guess != answer);
	printf("it took you %d tries to get the correct answer\n", tries);

	return 0;
}
