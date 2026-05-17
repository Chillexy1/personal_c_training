#include <stdio.h>
#include <string.h>

int main(void) {
  
  char noun[50] = "";
  char verb[50] = "";
  char adject1[50] = "";
  char adject2[50] = "";
  char adject3[50] = "";
  
  printf("enter a noun: ");
  fgets(noun, sizeof(noun), stdin);
  noun[strlen(noun) -1] = '\0';
  
  printf("enter a verb: ");
  fgets(verb, sizeof(verb),stdin);
  verb[strlen(verb) -1] = '\0';
  
  printf("enter an adjective1: ");
  fgets(adject1, sizeof(adject1), stdin);
  adject1[strlen(adject1) -1] = '\0';

  printf("enter an adjective2; ");
  fgets(adject2, sizeof(adject2), stdin);
  adject2[strlen(adject2) -1] = '\0';

  printf("enter an adjective3; ");
  fgets(adject3, sizeof(adject3), stdin);
  adject3[strlen(adject3) -1] = '\0';

  printf("i went to %s zoo\n", noun);
  printf("while %s\n", verb);
  printf("i came close to %s\n", adject1);
  printf("%s is really interesting\n", adject2);
  printf("%s is also right\n", adject3);

  return 0;
  
}
