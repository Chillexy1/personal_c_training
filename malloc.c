#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// malloc is a function in c that dianamically allocates a specified number of
// bytes in memory
int main(void) {
  int i;
  int number;
  char *grades;

  printf("enter limit of grade: ");
  scanf("%d", &number);

  grades = malloc(number * sizeof(char));

  if (grades == NULL) {
    printf("memory allocstion failed");
    return 1;
  }

  for (i = 0; i < number; i++) {
    printf("enter grade: ");
    scanf(" %c", &grades[i]);
  }

  for (i = 0; i < number; i++) {

    printf("%c ", toupper(grades[i]));
  }
  printf("\n");

  free(grades);
  grades = NULL;

  return 0;
}
