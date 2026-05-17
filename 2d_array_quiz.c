#include <stdio.h>
#include <ctype.h>

int main()
{
	char questions[][1000] = {"\nwhat is the hottest planet.","\nin the year 2024, who won the USA election","\nwho was the first man God created."};
	
	char options[][1000] = {"A:Mecury\nB:Venus\nC:Sun\nD:Mars\n", "A:Donal Trump\nB:Wilson Thompson\nC:Thomos Edison\nD:Kelvin Wilson\n", "A:Cane\nB:Adam\nC:Abraham\nD:John\n"};
	
	char answer[] = {'C','A','B'};
	
	int size, i, count = 0;
	char guess = '\0';
	
	size = sizeof(questions)/sizeof(questions[0]);	

	printf("***QUIZ GAME***\n");
	for (i = 0; i < size;i++)
	{
		printf("%s\n", questions[i]);
		printf("%s\n", options[i]);
		printf("what is the right answer: ");
		scanf(" %c", &guess);
		guess = toupper(guess);
		
		if (guess == answer[i]){
			printf("CORRECT\n");
			count++;
		}
		else{
			printf("WRONG ANSWER\n");
		}
		
	}
	
	printf("\nyou scored %d points out of %d questions\n", count, size);
		
	return 0;
}
