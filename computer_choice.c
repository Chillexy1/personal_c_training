#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "function.h"


int computer_choice()
{
	int rand_num;
	
	srand(time(NULL));
	
	rand_num = (rand() % 3)+1;
	return rand_num;

}
