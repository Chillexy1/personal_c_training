#include <stdio.h>
/*
 *creating a file using c
 * */

int main(void) {
  FILE *pFile = fopen("/storage/emulated/0/output.txt", "w");
  char text[] = "LEARNING SOFTWARE ENGINEERING AT WINMINGLE IS THE "
                "BEST\n\nWELDONE CHILLEXY!!!\n ";

  if (pFile == NULL) {
    printf("error fetching file\n");
    return 1;
  }

  // fprintf is best practice to print file before outputing with printf or any
  // other standard output function

  fprintf(pFile, "%s", text);
  printf("file was successfuly written\n");
  fclose(pFile);

  return 0;
}
