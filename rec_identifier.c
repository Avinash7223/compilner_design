// write a c program to recgince an identifer.

#include <ctype.h>
#include <stdio.h>

int main() {
  char str[20];
  int i = 0;
  printf("Enter an identifier: ");
  scanf("%s", str);
  if (isalpha(str[0])) {
    for (i = 1; str[i] != '\0'; i++) {
      if (isalnum(str[i])) {
        continue;
      } else {
        break;
      }
    }
    printf("It ia an Identifier");
  } else {
    printf("It is Not an identifier");
  }

  return 0;
}