#include <stdio.h>
// #include "main.h"

/* this function returns user input */

int _getchar(void) {
  int ch;
  printf("enter number: ");

  while ((ch = getchar()) != '\n') {
    printf("%c", ch);
  }

  return ch;
}
