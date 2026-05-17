#include <stdio.h>

//SWITCH ARE ALTHERNATIVE WAYS TO USE MANY IF STATEMENT
int main(){
	int daysoftheweek;
	printf("DAYS OF THE WEEK:\n");
	printf("ENTER NUMBER 1 -7 ONLY: ");
	scanf("%d", &daysoftheweek);
	
	switch(daysoftheweek){
	case 1:
		printf("its monday\n");
		break;
	case 2:
		printf("its tuesday\n");
		break;
	case 3:
		printf("it's wednesday\n");
		break;
	case 4:
		printf("it's thursday\n");
		break;
	case 5:
		printf("it's friday\n");
		break;
	case 6:
		printf("it's saturday\n");
		break;
	case 7:
		printf("it's sunday\n");
		break;
	default :
		printf("please enter number (1-7) only:\n");
	
	}
	
	return 0;
}
