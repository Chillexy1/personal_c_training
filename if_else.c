#include <stdio.h>
#include <string.h>

int main(void) {
  char name[50] = "";

  printf("WELCOME MESSAGE:\n");
  printf("ENTER YOUR NAME: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  if (strlen(name) == 0) {
    printf("you didn't input a name\n");
  } else {
    printf("Hello %s, how was your day\n", name);
  }
}
