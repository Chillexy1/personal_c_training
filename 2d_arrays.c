#include <stdio.h>

/*this is a pract]cal lesson on 2d array on c programming language */

int main()
{
	int i;
	int j;
	int size;
	//int size2;

	int number[][4] = {{1, 2, 3}, 
					   {4, 5, 6}, 
					   {10, 55, 17},
					   {55, 30, 26},
					   {22, 51, 5}};
	size = sizeof(number)/sizeof(number[0]);
//	size2 = sizeof(number[0])/sizeof(number[0][0]);
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", number[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
