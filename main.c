#include <stdio.h>
#include "function.h"
#include <string.h>

int main(void)
{
	char name[50] = "";
	int age;
	
	printf("enter a name: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) -1] = '\0';
	
	printf("enter an age: ");
	scanf("%d", &age);
	
	happybirthday(name,age);

	return 0;
		
}
