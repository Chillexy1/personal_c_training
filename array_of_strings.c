#include <stdio.h>

int main()
{
	int size, i;
	char names[3][25]= {0};
	
	size = sizeof(names)/sizeof(names[0]);
	
	for (i = 0; i < size;i++)
	{
		printf("Enter a name: ");
		fgets(names[i], sizeof(names[i]), stdin);
		names[i][strlen(names[i]) - 1] = '\0';
	}
	
	for (i = 0; i < size; i++)
	{
		printf("%s\n", names[i]);
	}

		   
	return 0;
}
