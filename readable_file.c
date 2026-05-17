#include <stdio.h>

/*
 * this is a readable file using c
 */

int main(void) {
  FILE *pFile = fopen("/storage/emulated/0/zerotomastery/Readme.txt", "r");
  char buffer[1024] = {0};

  if (pFile == NULL) {
    printf("error reading file\n");
    return 1;
  }

  while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
    printf("%s", buffer);
  }

  fclose(pFile);

  return 0;
}
