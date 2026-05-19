#include "main.h"
#include <stdio.h>

/* this is a definition function */
int main(void) {
  int count;

  count = 0;
  while (count < 10) {
    show_message();
    count++;
  }

  return 0;
}
