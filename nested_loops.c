#include <stdio.h>

int main() {
	int i, rows;
	int j, colums;
	char symbol = '\0';
	
	printf("enter number of rows:");
	scanf("%d", &rows);
	
	printf("enter number of colums:");
	scanf("%d", &colums);
	
	printf("type a symbol to use:");
	scanf(" %c", &symbol);
	
	for (i = 1; i <= rows; i++){
		for (j = 1; j <= colums; j++) {
		
			printf("%c", symbol);
		}
		printf("\n");
	}

	return 0;
}
