#include "function.h"
#include <stdio.h>

int main(void) {
  Student student1 = {"Chillexy", 25, 30.5, true};

  printf("Name: %s\n", student1.name);
  printf("Age: %d\n", student1.age);
  printf("Gpa: %.2f\n", student1.gpa);
  printf("Isfulltime: %s\n", (student1.ISFULLTIME) ? "YES" : "NO");

  return 0;
}
