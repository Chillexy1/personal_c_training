#include <stdio.h>

int main()
{
	int i, size;
	int scores[5] = {0};
	
	size = sizeof(scores)/sizeof(scores[0]);
		
	for (i = 0; i < size; i++)
	{
		printf("enter some scores: ");
		scanf("%d", &scores[i]);
	
		
	}
	
	for (i = 0; i < size; i++)
	{
		printf("%d ", scores[i]);
	}
	printf("\n");
	
	return 0;
}
