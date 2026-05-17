#include "function.h"
#include <stdio.h>

/*
 * we're learning to use pointers in c
 *
 * pointers are variables that stores the memory address of another variables
 * */

int main(void) {
  int age = 25;
  birthday(&age);

  printf("You're %d yrs old today\n", age);

  return 0;
}
