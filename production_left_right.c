// Program to read a valid production and identify the left and right parts

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
  int i = 0;

  if (isValid(production)) {

    printf("Left: ");
    while (production[i] != '\0') {

      if ((production[i] == '-' && production[i + 1] == '>')) {
        break;
      }
      printf("%c", production[i]);
      i++;
    }

    i = i + 2;
    printf(",  Right: ");
    while (production[i] != '\0') {

      if (production[i] == '|') {
        printf(", ");
        i++;
        continue;
      }                                                                                                                                  
      printf("%c", production[i]);
      i++;
    }

  } else {
    printf("The production is not Valid.\n");
  }

  return 0;
}