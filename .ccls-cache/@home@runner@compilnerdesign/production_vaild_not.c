//1. Program to check if a production is valid or not

#include <ctype.h>
#include <stdio.h>

int isValid(char *production) {

  int i = 0;

  while (production[i] != '\0') {
    if (!isupper(production[0])) {
      return 0;
    }
    if (!(production[1] == '-' && production[2] == '>')) {
      return 0;
    }
    i++;
  }
  return 1;
}

int main() {
  char production[100];
  printf("Enter the production: ");
  fgets(production, sizeof(production), stdin);
  if (isValid(production)) {
    printf("The production is Valid\n");
  } else {
    printf("The production is not Valid.\n");
  }

  return 0;
}
