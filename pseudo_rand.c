#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* this is a pseudo random generator code*/

int main() {
	int min = 50;
	int max = 100;		
	int rand_num;
	
	srand(time(NULL));
	
	rand_num = (rand() % (max - min + 1)) + min;
	
	printf("%d\n", rand_num);

	return 0;
}
